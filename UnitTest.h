#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAdditionBasic();
        std::cout << "All unit tests completed!" << std::endl;
    }

private:
    void testAdditionBasic() {
        Addition addition;
        if (addition.add(2, 3) != 5) {
            std::cout << "Basic addition test failed!" << std::endl;
        }
    }
};

#endif