#include "GradeManager.h"
#include <iostream>

GradeManager::GradeManager() {
    // Constructor - vector is automatically initialized empty
}

void GradeManager::addGrade(int grade) {
    grades.push_back(grade);
}

void GradeManager::removeAt(int index) {
    if (index >= 0 && index < grades.size()) {
        grades.erase(grades.begin() + index);
    }
}

void GradeManager::updateGrade(int index, int newGrade) {
    if (index >= 0 && index < grades.size()) {
        grades[index] = newGrade;
    }
}

int GradeManager::countOccurrences(int grade) {
    int count = 0;
    for (int g : grades) {
        if (g == grade) {
            count++;
        }
    }
    return count;
}

std::vector<int> GradeManager::findAllIndices(int grade) {
    std::vector<int> indices;
    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] == grade) {
            indices.push_back(i);
        }
    }
    return indices;
}

int GradeManager::countBelow(int threshold) {
    int count = 0;
    for (int grade : grades) {
        if (grade < threshold) {
            count++;
        }
    }
    return count;
}

int GradeManager::getSize() {
    return grades.size();
}

double GradeManager::getAverage() {
    if (grades.empty()) {
        return 0.0;
    }
    
    int sum = 0;
    for (int grade : grades) {
        sum += grade;
    }
    return static_cast<double>(sum) / grades.size();
}

void GradeManager::clearGrades() {
    grades.clear();
}