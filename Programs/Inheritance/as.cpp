#include<iostream>
using namespace std;
class A{
    public:
        void display(){
            cout<<"A"<<endl;
        }
};
class B:virtual public A{
    public:
        void display(){
            cout<<"B"<<endl;
        }
};
class C:virtual public A{
    public:
        void display(){
            cout<<"C"<<endl;
        }
};
class D:virtual public B, virtual public C{
    public:
        void display(){
            cout<<"D"<<endl;
        }
}d;
int main(){
   d.A::display(); 
}