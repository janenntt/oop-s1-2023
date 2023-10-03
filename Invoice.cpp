#include "Invoice.h"

Invoice::Invoice(invoiceId){
    this->invoiceId = invoiceId;
}

void Invoice::addServiceCost(int costDollars){
    if (costDollars > 0) {
        dollarsOwed += costDollars;
    }
}

int Invoice::getDollarsOwed(){
    return this->dollarsOwed = dollarsOwed;
}

string Invoice::getInvoiceId(){
    return this->invoiceId = invoiceId;
}