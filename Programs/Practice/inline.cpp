#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void get(){
        cout<<"Enter a: ";
        cin>>a;
    }
    void show();
}s;
inline void A::show(){
    cout<<"a: "<<a<<endl;
}
int main(){
    cout<<"Inline function"<<endl;
    s.get();
    s.show();
    return 0;
}