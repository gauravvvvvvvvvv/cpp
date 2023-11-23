#include<bits/stdc++.h>
using namespace std;
class employee{
    public:
        employee(){
            cout<<"I am an employee"<<endl;
        }
        ~employee(){
            cout<<"Employee Killed"<<endl;
        }
};
class company{
    public:
        employee* e;
        company(employee *emp){
            cout<< "This is a company"<<endl;
        }
        ~company(){
            cout<<"Employee destroyed this company 😭"<<endl;
        }
};
int main(){
    employee* e = new employee;
    company c(e);
    return 0;
}