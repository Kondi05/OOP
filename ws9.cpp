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
            throw runtime_error("file_error");
        }
        
        string line;
        while (getline(file, line)) {
            try {
                int value = stoi(line);
                records.push_back(value);
            }
            catch (const invalid_argument& e) {
                cout << "invalid_argument error" << endl;
                file.close();
                throw;
            }
            catch (const out_of_range& e) {
                cout << "out_of_range error" << endl;
                file.close();
                throw;
            }
        }
        file.close();
    }
};

int main(int argc, char* argv[]) {
    if (argc < 2) {
        return 1;
    }
    
    Records myRecords;
    string filename = argv[1];

    try {
        RecordsManager recordM(filename); 
        recordM.read(myRecords);

        int sum = 0;
        for (size_t i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
        return 0;
    }
    catch (const invalid_argument& e) {
        return 1;
    }
    catch (const out_of_range& e) {
        return 1;
    }
    catch (const exception& e) {
        return 1;
    }
    catch (...) {
        return 1;
    }
}