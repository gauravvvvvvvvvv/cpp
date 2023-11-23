/*Write a CPP program having atleast one class and having data member and member function in it.
Then create its object and print the numbers, sum of numbers, subtraction of numbers. multiplication of numbers, division of numbers.*/
#include<iostream>
using namespace std;
class info{
    private:
        int x,y;
    public:
        void getdata(){
            cout<<"Enter the value of x: ";
            cin>>x;
            cout<<"Enter the value of y: ";
            cin>>y;
        }
        void showdata(){
            cout<<"The number x is = "<<x<<endl;
            cout<<"THe number y is = "<<y<<endl;
        }
        void sum(){
            cout<<"The sum of x and y is = "<<x+y<<endl;
        }
        void sub(){
            cout<<"The subtraction of x and y is = "<<x-y<<endl;
        }
        void mul(){
            cout<<"The multiplication of x and y is = "<<x*y<<endl;
        }
        void div(){
            cout<<"The division of x and y is = "<<float(x)/float(y)<<endl;
        }
};
int main(){
    info a1;
    a1.getdata();
    a1.showdata();
    a1.sum();
    a1.sub();
    a1.mul();
    a1.div();
    return 0;
}