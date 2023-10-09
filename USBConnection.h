#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <stack>
using namespace std;

class USBConnection {
    private:
        int ID;
        USBConnection(int ID);
        
    public:
        static std::stack<int> ids;
        static USBConnection* CreateUsbConnection();
        int get_id() const;
        ~USBConnection();
    

};

#endif