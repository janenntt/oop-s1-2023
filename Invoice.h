#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice {
    private:
        string invoiceId; // a unique identifier for the invoice
        int dollarsOwed; // the total amount owed in dollars for service

    public:
        Invoice(invoiceId);
        void addServiceCost(int costDollars);
        int getDollarsOwed();
        string getInvoiceId();
};
#endif