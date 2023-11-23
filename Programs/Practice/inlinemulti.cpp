/*Write a program to find multiplicative values and cubic values using inline functions.*/
#include <iostream>
using namespace std;
class A{
    int a;
    public:
    void get(){
        cout<<"Enter a: ";
        cin>>a;
    }
    void show();
}m;
inline void A::show(){
    cout<<"Multiplicative value: "<<a*a<<endl;
    cout<<"Cubic value: "<<a*a*a<<endl;
}
int main(){
    cout<<"Inline function"<<endl;
    m.get();
    m.show();

    return 0;
}