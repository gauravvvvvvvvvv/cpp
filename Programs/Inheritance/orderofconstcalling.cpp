#include<iostream>
using namespace std;
class Base1 {
public:
        Base1() {
                cout << "Base1 constructor called\n";
        }
};

class Base2 {
public:
        Base2() {
                cout << "Base2 constructor called\n";
        }
};

class Derived : public Base1, public Base2 {
public:
        Derived() {
                cout << "Derived constructor called\n";
        }
};

int main() {
        Derived d;
        return 0;
}
