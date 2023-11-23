//Take one struct Employee, add age, salary and name. Take age, salary and input from user and print the details of employee.
#include<iostream>
using namespace std;
struct Employee
{
    int age;
    string salary;
    string name;
}e1;
int main(){
    cout<<"Enter name of the employee: ";
    cin>>(e1.name);
    cout<<"Enter age of the employee: ";
    cin>>e1.age;
    cout<<"Enter salary of the employee: ";
    cin>>e1.salary;
    cout<<"\nInfo to display: "<<endl;
    cout<<"Name: "<<e1.name<<endl;
    cout<<"Age: "<<e1.age<<endl;
    cout<<"Salary: "<<e1.salary<<endl;
    return 0;
}