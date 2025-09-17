#ifndef EQUIVALENCE_TESTS_H
#define EQUIVALENCE_TESTS_H

#include <iostream>
#include <climits>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedIntegers();
        testZeroCases();
        testBoundaryValues();
        testSpecialCases();
        std::cout << "All equivalence tests completed!" << std::endl;
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Positive integers test failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Negative integers test failed!" << std::endl;
        }
    }

    void testMixedIntegers() {
        Addition addition;
        if (addition.add(7, -3) != 4) {
            std::cout << "Mixed integers test failed!" << std::endl;
        }
        if (addition.add(-8, 12) != 4) {
            std::cout << "Mixed integers test 2 failed!" << std::endl;
        }
    }

    void testZeroCases() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Zero-zero test failed!" << std::endl;
        }
        if (addition.add(5, 0) != 5) {
            std::cout << "Positive-zero test failed!" << std::endl;
        }
        if (addition.add(0, -3) != -3) {
            std::cout << "Zero-negative test failed!" << std::endl;
        }
    }

    void testBoundaryValues() {
        Addition addition;
        // Test with maximum and minimum integer values
        if (addition.add(INT_MAX, 0) != INT_MAX) {
            std::cout << "INT_MAX boundary test failed!" << std::endl;
        }
        if (addition.add(INT_MIN, 0) != INT_MIN) {
            std::cout << "INT_MIN boundary test failed!" << std::endl;
        }
    }

    void testSpecialCases() {
        Addition addition;
        if (addition.add(1, 1) != 2) {
            std::cout << "Special case 1 test failed!" << std::endl;
        }
        if (addition.add(-1, -1) != -2) {
            std::cout << "Special case -1 test failed!" << std::endl;
        }
        if (addition.add(1, -1) != 0) {
            std::cout << "Special case 1 and -1 test failed!" << std::endl;
        }
    }
};

#endif