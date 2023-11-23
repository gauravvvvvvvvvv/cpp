//Create a program to use an array of objects of a college class and get their data and store it. Also print it on the screen. Take the number of students in class.
#include<iostream>
using namespace std;
class Student{
    int id;
    string name;
    long long int number;
    public:
        void getdata(){
           cout<<"Enter id: "<<endl;
           cin>>id;
           cout<<"Enter the name: "<<endl;
           cin>>name;
           cout<<"Enter the number: "<<endl;
           cin>>number;
        }
        void putdata(){
            cout<<"The id is: "<<id<<endl;
            cout<<"The name is: "<<name<<endl;
            cout<<"The number is: "<<number<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter the number of students: "<<endl;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        s[i].getdata();
    }
    for(int i=0;i<n;i++){
        s[i].putdata();
    }
    return 0;
}