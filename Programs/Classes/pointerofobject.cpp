#include<iostream>
using namespace std;
class A{
    int x;
    public:
        void getdata(){
            cout<<"Enter value for x: ";
            cin>>x;
        }
        void showdata(){
            cout<<"Value of x = "<<x<<endl;
        }
};
int main(){
    A *ptr;
    ptr = new A;
    ptr->getdata();
    ptr->showdata();
}