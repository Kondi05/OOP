#include "RecordManager.h"
#include <iostream>

// Initialize static members (MUST be done outside the class)
int RecordManager::nextStudentID = 10001;
int RecordManager::totalRecordsCreated = 0;

RecordManager::RecordManager() {
    // Constructor - vector is automatically initialized empty
}

// Static member functions
int RecordManager::generateNextID() {
    int newID = nextStudentID;
    nextStudentID++;
    totalRecordsCreated++;
    return newID;
}

int RecordManager::getTotalRecordsCreated() {
    return totalRecordsCreated;
}

int RecordManager::getNextStudentID() {
    return nextStudentID;
}

// Instance member functions
int RecordManager::addRecord(int grade) {
    int newID = generateNextID();
    records.push_back(std::make_pair(newID, grade));
    return newID;
}

void RecordManager::removeRecord(int studentID) {
    for (auto it = records.begin(); it != records.end(); ++it) {
        if (it->first == studentID) {
            records.erase(it);
            return; // Found and removed, exit early
        }
    }
}

bool RecordManager::updateGrade(int studentID, int newGrade) {
    for (auto& record : records) {
        if (record.first == studentID) {
            record.second = newGrade;
            return true; // Found and updated
        }
    }
    return false; // Not found
}

int RecordManager::getGrade(int studentID) {
    for (const auto& record : records) {
        if (record.first == studentID) {
            return record.second;
        }
    }
    return -1; // Not found
}

std::vector<int> RecordManager::findRecordsByGrade(int grade) {
    std::vector<int> studentIDs;
    for (const auto& record : records) {
        if (record.second == grade) {
            studentIDs.push_back(record.first);
        }
    }
    return studentIDs;
}

int RecordManager::countRecordsBelow(int threshold) {
    int count = 0;
    for (const auto& record : records) {
        if (record.second < threshold) {
            count++;
        }
    }
    return count;
}

std::pair<int, int> RecordManager::getRecord(int studentID) {
    for (const auto& record : records) {
        if (record.first == studentID) {
            return record; // Return the found record
        }
    }
    return std::make_pair(-1, -1); // Not found
}

std::vector<std::pair<int, int>> RecordManager::getRecordsAbove(int threshold) {
    std::vector<std::pair<int, int>> result;
    for (const auto& record : records) {
        if (record.second > threshold) {
            result.push_back(record);
        }
    }
    return result;
}

int RecordManager::getSize() {
    return records.size();
}

double RecordManager::getAverage() {
    if (records.empty()) {
        return 0.0;
    }
    
    int sum = 0;
    for (const auto& record : records) {
        sum += record.second;
    }
    return static_cast<double>(sum) / records.size();
}

void RecordManager::clearAllRecords() {
    records.clear();
    // Note: static members are NOT reset
}