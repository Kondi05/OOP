#include <iostream>
#include "RecordManager.h"

using namespace std;

void printStudentIDs(const vector<int>& ids, const string& name) {
    cout << name << ": ";
    for (int i = 0; i < ids.size(); i++) {
        cout << ids[i];
        if (i < ids.size() - 1) cout << ", ";
    }
    cout << endl;
}

void printRecords(const vector<pair<int, int>>& records, const string& name) {
    cout << name << ": ";
    for (int i = 0; i < records.size(); i++) {
        cout << "{" << records[i].first << "," << records[i].second << "}";
        if (i < records.size() - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    cout << "=== Record Manager Test ===" << endl;
    
    // Test static members before creating instances
    cout << "Initial static values:" << endl;
    cout << "Next Student ID: " << RecordManager::getNextStudentID() << endl;
    cout << "Total Records Created: " << RecordManager::getTotalRecordsCreated() << endl;
    cout << endl;
    
    RecordManager rm1;
    
    // Test adding records
    cout << "Adding records to rm1:" << endl;
    int id1 = rm1.addRecord(85);
    cout << "Added record with ID: " << id1 << " and grade 85" << endl;
    int id2 = rm1.addRecord(72);
    cout << "Added record with ID: " << id2 << " and grade 72" << endl;
    int id3 = rm1.addRecord(90);
    cout << "Added record with ID: " << id3 << " and grade 90" << endl;
    int id4 = rm1.addRecord(85);
    cout << "Added record with ID: " << id4 << " and grade 85" << endl;
    
    cout << "Current size: " << rm1.getSize() << endl;
    cout << "Average grade: " << rm1.getAverage() << endl;
    cout << "Total Records Created: " << RecordManager::getTotalRecordsCreated() << endl;
    cout << "Next Student ID: " << RecordManager::getNextStudentID() << endl;
    cout << endl;
    
    // Test getGrade and getRecord
    cout << "Grade for student " << id2 << ": " << rm1.getGrade(id2) << endl;
    pair<int, int> record = rm1.getRecord(id3);
    cout << "Full record for student " << id3 << ": {" << record.first << "," << record.second << "}" << endl;
    cout << endl;
    
    // Test findRecordsByGrade
    vector<int> studentsWith85 = rm1.findRecordsByGrade(85);
    printStudentIDs(studentsWith85, "Students with grade 85");
    cout << endl;
    
    // Test countRecordsBelow
    cout << "Records below 80: " << rm1.countRecordsBelow(80) << endl;
    cout << "Records below 90: " << rm1.countRecordsBelow(90) << endl;
    cout << endl;
    
    // Test getRecordsAbove
    vector<pair<int, int>> above80 = rm1.getRecordsAbove(80);
    printRecords(above80, "Records above 80");
    cout << endl;
    
    // Test updateGrade
    cout << "Updating grade for student " << id2 << " from 72 to 78" << endl;
    bool updated = rm1.updateGrade(id2, 78);
    cout << "Update successful: " << (updated ? "Yes" : "No") << endl;
    cout << "New grade: " << rm1.getGrade(id2) << endl;
    cout << "New average: " << rm1.getAverage() << endl;
    cout << endl;
    
    // Test removeRecord
    cout << "Removing student " << id3 << endl;
    rm1.removeRecord(id3);
    cout << "Size after removal: " << rm1.getSize() << endl;
    cout << "Trying to get removed student's grade: " << rm1.getGrade(id3) << endl;
    cout << endl;
    
    // Test invalid operations
    cout << "Testing invalid student ID 99999:" << endl;
    cout << "Grade: " << rm1.getGrade(99999) << endl;
    cout << "Update result: " << (rm1.updateGrade(99999, 100) ? "Success" : "Failed") << endl;
    pair<int, int> invalidRecord = rm1.getRecord(99999);
    cout << "Get record: {" << invalidRecord.first << "," << invalidRecord.second << "}" << endl;
    cout << endl;
    
    // Test clearAllRecords
    cout << "Clearing all records..." << endl;
    rm1.clearAllRecords();
    cout << "Size after clear: " << rm1.getSize() << endl;
    cout << "Total Records Created (static persists): " << RecordManager::getTotalRecordsCreated() << endl;
    cout << "Next Student ID (static persists): " << RecordManager::getNextStudentID() << endl;
    cout << endl;
    
    // Test multiple instances share static members
    cout << "Testing multiple instances share static members:" << endl;
    RecordManager rm2;
    int newID = rm2.addRecord(95);
    cout << "rm2 added record with ID: " << newID << endl;
    cout << "Total Records Created: " << RecordManager::getTotalRecordsCreated() << endl;
    cout << "Next Student ID: " << RecordManager::getNextStudentID() << endl;
    
    return 0;
}