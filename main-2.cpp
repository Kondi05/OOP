#include <iostream>
#include "GradeManager.h"

using namespace std;

void printVector(const vector<int>& vec, const string& name) {
    cout << name << ": ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    GradeManager gm;
    
    cout << "=== Grade Manager Test ===" << endl;
    
    // Test initial state
    cout << "Initial size: " << gm.getSize() << endl;
    cout << "Initial average: " << gm.getAverage() << endl;
    cout << endl;
    
    // Test adding grades
    cout << "Adding grades: 85, 72, 90, 85, 65, 85" << endl;
    gm.addGrade(85);
    gm.addGrade(72);
    gm.addGrade(90);
    gm.addGrade(85);
    gm.addGrade(65);
    gm.addGrade(85);
    
    cout << "Size after adding: " << gm.getSize() << endl;
    cout << "Average: " << gm.getAverage() << endl;
    cout << endl;
    
    // Test countOccurrences
    cout << "Occurrences of 85: " << gm.countOccurrences(85) << endl;
    cout << "Occurrences of 100: " << gm.countOccurrences(100) << endl;
    cout << endl;
    
    // Test findAllIndices
    vector<int> indices = gm.findAllIndices(85);
    printVector(indices, "Indices of grade 85");
    cout << endl;
    
    // Test countBelow
    cout << "Grades below 80: " << gm.countBelow(80) << endl;
    cout << "Grades below 70: " << gm.countBelow(70) << endl;
    cout << endl;
    
    // Test updateGrade
    cout << "Updating index 1 from 72 to 78" << endl;
    gm.updateGrade(1, 78);
    cout << "New average: " << gm.getAverage() << endl;
    cout << "Grades below 80 now: " << gm.countBelow(80) << endl;
    cout << endl;
    
    // Test removeAt
    cout << "Removing grade at index 2" << endl;
    gm.removeAt(2);
    cout << "Size after removal: " << gm.getSize() << endl;
    cout << "New average: " << gm.getAverage() << endl;
    cout << endl;
    
    // Test invalid operations
    cout << "Testing invalid operations:" << endl;
    cout << "Trying to remove at index 10 (invalid)..." << endl;
    gm.removeAt(10);
    cout << "Size remains: " << gm.getSize() << endl;
    
    cout << "Trying to update index 10 (invalid)..." << endl;
    gm.updateGrade(10, 100);
    cout << "Size remains: " << gm.getSize() << endl;
    cout << endl;
    
    // Test clearGrades
    cout << "Clearing all grades..." << endl;
    gm.clearGrades();
    cout << "Size after clear: " << gm.getSize() << endl;
    cout << "Average after clear: " << gm.getAverage() << endl;
    
    return 0;
}