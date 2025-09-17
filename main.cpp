#include "UnitTest.h"
#include "EquivalenceTests.h"
#include "InvoiceTest.h"

int main() {
    // Run basic unit tests
    UnitTest unitTest;
    unitTest.runTests();

    // Run equivalence class tests
    EquivalenceTests equivalenceTests;
    equivalenceTests.runTests();

    // Run invoice-specific tests
    InvoiceTest invoiceTest;
    invoiceTest.runTests();

    std::cout << "All tests completed successfully!" << std::endl;
    return 0;
}