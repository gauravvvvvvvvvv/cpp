#include<iostream>
using namespace std;
class A;
class B;
class A{
    float salary = 1000;
    public:
        friend int add(A ob, B ob2);
}ob;
class B{
    float salary = 1500;
    public:
        friend int add(A ob, B ob2);
}ob2;
int add (A ob, B ob2){
    double balance = ob.salary + ob2.salary;   
    return balance;
}
int main(){
    cout<<add(ob,ob2)<<endl;
    return 0;
}