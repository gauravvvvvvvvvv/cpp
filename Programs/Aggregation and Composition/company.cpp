#include<bits/stdc++.h>
using namespace std;
class employee{
    
    public:
        employee(){
            cout<<"Employee created"<<endl;
        }
        ~employee(){
            cout<<"Employee Killed"<<endl;
        }
};
class company{
    public:
        employee* e;
        company(employee *emp){
            cout<< "Company created"<<endl;
        }
        ~company(){
            cout<<"Company Bankrupted"<<endl;
        }
};
int main(){
    employee* e = new employee;
    company c(e);
    return 0;
}
