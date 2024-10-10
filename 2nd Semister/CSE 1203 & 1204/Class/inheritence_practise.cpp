// C++ program to demonstrate the
//working of public inheritance
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace std;
class Base {
    private:
        int pvt = 1;
    protected:
        int prot = 2;
    public:
        int pub = 3;
// function to access private member
        int getPVT() {
            return pvt;
        }
};

class PublicDerived : public Base {
    public:
// function to access protected member from Base
        // cout << "Private = " << object1.getPVT() << endl;
        
        int getProt() {
            return prot;
        }
        int getPub()
        {
            return pub;
        }
};

int main() {
    PublicDerived object1;
        cout << "Private = " << object1.getPVT() << endl;
        cout << "Protected = " << object1.getProt() << endl;
        cout << "Public = " << object1.getPub() << endl;
    return 0;
}