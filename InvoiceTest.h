#ifndef INVOICE_TEST_H
#define INVOICE_TEST_H

#include <iostream>
#include <string>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testConstructor();
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
        testAddServiceCostNegative();
        testAddServiceCostZero();
        testMultipleAdditions();
        std::cout << "All Invoice tests completed!" << std::endl;
    }

private:
    void testConstructor() {
        Invoice invoice("INV001");
        if (invoice.getInvoiceId() != "INV001") {
            std::cout << "Constructor test failed: ID mismatch" << std::endl;
        }
        if (invoice.getDollarsOwed() != 0) {
            std::cout << "Constructor test failed: Initial dollars owed should be 0" << std::endl;
        }
    }

    void testAddServiceCost() {
        Invoice invoice("INV002");
        invoice.addServiceCost(100);
        if (invoice.getDollarsOwed() != 100) {
            std::cout << "AddServiceCost test failed: Expected 100, got " << invoice.getDollarsOwed() << std::endl;
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("INV003");
        if (invoice.getDollarsOwed() != 0) {
            std::cout << "GetDollarsOwed test failed: Initial value should be 0" << std::endl;
        }
        
        invoice.addServiceCost(50);
        if (invoice.getDollarsOwed() != 50) {
            std::cout << "GetDollarsOwed test failed: Expected 50, got " << invoice.getDollarsOwed() << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("TEST123");
        if (invoice.getInvoiceId() != "TEST123") {
            std::cout << "GetInvoiceId test failed: Expected TEST123, got " << invoice.getInvoiceId() << std::endl;
        }
    }

    void testAddServiceCostNegative() {
        Invoice invoice("INV004");
        try {
            invoice.addServiceCost(-10);
            std::cout << "AddServiceCost negative test failed: Should have thrown exception" << std::endl;
        } catch (const std::invalid_argument& e) {
            // Expected behavior
        }
    }

    void testAddServiceCostZero() {
        Invoice invoice("INV005");
        try {
            invoice.addServiceCost(0);
            std::cout << "AddServiceCost zero test failed: Should have thrown exception" << std::endl;
        } catch (const std::invalid_argument& e) {
            // Expected behavior
        }
    }

    void testMultipleAdditions() {
        Invoice invoice("INV006");
        invoice.addServiceCost(10);
        invoice.addServiceCost(20);
        invoice.addServiceCost(30);
        if (invoice.getDollarsOwed() != 60) {
            std::cout << "Multiple additions test failed: Expected 60, got " << invoice.getDollarsOwed() << std::endl;
        }
    }
};

#endif