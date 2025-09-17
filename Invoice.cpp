#include "Invoice.h"
#include <stdexcept>
#include <string>

Invoice::Invoice(const std::string& id) : invoiceId(id), dollarsOwed(0) {}

void Invoice::addServiceCost(int costDollars) {
    if (costDollars <= 0) {
        throw std::invalid_argument("Cost must be a positive dollar amount");
    }
    dollarsOwed += costDollars;
}

int Invoice::getDollarsOwed() const {
    return dollarsOwed;
}

std::string Invoice::getInvoiceId() const {
    return invoiceId;
}