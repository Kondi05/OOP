#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    void read(Records &records) {
        ifstream file(_filename);
        if (!file.is_open()) {
            return;
        }
        
        string line;
        while (getline(file, line)) {
            try {
                int value = stoi(line);
                records.push_back(value);
            }
            catch (const invalid_argument& e) {
                cout << "invalid_argument error" << endl;
                throw;
            }
            catch (const out_of_range& e) {
                cout << "out_of_range error" << endl;
                throw;
            }
        }
        file.close();
    }
};

int main(int argc, char* argv[]) {
    Records myRecords;
    string filename = "records.txt";
    if (argc > 1) filename = argv[1];

    try {
        RecordsManager recordM(filename); 
        recordM.read(myRecords);

        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
        return 0;
    }
    catch (...) {
        return 1;
    }
}