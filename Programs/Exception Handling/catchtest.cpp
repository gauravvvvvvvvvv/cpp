#include <iostream>
using namespace std;

template <typename T>
class Base {
public:
    T data;
    Base(T val) : data(val) {}
    virtual void print() {
        cout << data << " ";
    }
};

template <typename T>
class Derived : public Base<T> {
public:
    Derived(T val) : Base<T>(val) {}
    void print() override {
        cout << this->data / 2 << " ";
    }
};

int main() {
    Base<int>* bptr = new Derived<double>(10.5);
    bptr->print();
    delete bptr;
    return 0;
}