#ifndef RECORDMANAGER_H
#define RECORDMANAGER_H

#include <vector>
#include <utility> // for std::pair

class RecordManager {
private:
    std::vector<std::pair<int, int>> records; // {studentID, grade}
    static int nextStudentID;                 // Shared across all instances
    static int totalRecordsCreated;           // Shared across all instances

public:
    RecordManager();
    
    // Static member functions
    static int generateNextID();
    static int getTotalRecordsCreated();
    static int getNextStudentID();
    
    // Instance member functions
    int addRecord(int grade);
    void removeRecord(int studentID);
    bool updateGrade(int studentID, int newGrade);
    int getGrade(int studentID);
    std::vector<int> findRecordsByGrade(int grade);
    int countRecordsBelow(int threshold);
    std::pair<int, int> getRecord(int studentID);
    std::vector<std::pair<int, int>> getRecordsAbove(int threshold);
    int getSize();
    double getAverage();
    void clearAllRecords();
};

#endif