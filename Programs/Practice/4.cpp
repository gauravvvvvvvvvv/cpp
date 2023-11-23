#include<iostream>
using namespace std;
class abc{
        int a,b;
    public:
        void sum(){
            cout<<"Enter the value of a: ";
            cin>>a;
            cout<<"Enter the value of b: ";
            cin>>b;
            cout<<"The sum is = "<<a+b<<endl;
        }
};
int main(){
    abc a1;
    a1.sum();
}