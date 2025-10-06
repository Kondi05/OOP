#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;
    
public:
    RecordsManager(string filename) : _filename(filename) {}
    
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (!_file.is_open()) {
            throw runtime_error("Unable to open file");
        }
        
        try {
            string line;
            int lineNumber = 0;
            
            while (getline(_file, line)) {
                lineNumber++;
                try {
                    int value = stoi(line);
                    records.push_back(value);
                }
                catch (const invalid_argument& e) {
                    cout << "invalid_argument error" << endl;
                    throw; // Re-throw to propagate to main
                }
                catch (const out_of_range& e) {
                    cout << "out_of_range error" << endl;
                    throw; // Re-throw to propagate to main
                }
            }
        }
        catch (...) {
            _file.close();
            throw;
        }
        _file.close();
    }
};

int main(int argc, char* argv[]) {
    try {
        Records myRecords;
        string filename = "records.txt";
        if (argc > 1) filename = argv[1];
        
        RecordsManager recordM(filename);
        recordM.read(myRecords);
        
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
    }
    catch (const exception& e) {
        // Catch any propagated exceptions
        return 1; // Return error code
    }
    catch (...) {
        // Catch any other exceptions
        return 1; // Return error code
    }
    
    return 0;
}