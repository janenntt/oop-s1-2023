#include "USBConnection.h"

// Initialize the static stack with available IDs
std::stack<int> USBConnection::ids;

// Constructor definition
USBConnection::USBConnection(int id) : ID(id) {}

// Static function definition
USBConnection* USBConnection::CreateUsbConnection() {
    if (!ids.empty()) {
        int id = ids.top();
        ids.pop();
        return new USBConnection(id);
    }
    return nullptr; // No available port
}

// Destructor definition
USBConnection::~USBConnection() {
    ids.push(ID);
}

// Getter function definition
int USBConnection::get_id() const {
    return ID;
}

// Initialize the stack with available IDs
namespace {
    struct InitializeUSBConnection {
        InitializeUSBConnection() {
            USBConnection::ids.push(3);
            USBConnection::ids.push(2);
            USBConnection::ids.push(1);
        }
    };

    InitializeUSBConnection initialize;
}
