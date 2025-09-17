#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {
private:
    std::string invoiceId;
    int dollarsOwed;

public:
    Invoice(const std::string& id);
    void addServiceCost(int costDollars);
    int getDollarsOwed() const;
    std::string getInvoiceId() const;
};

#endif