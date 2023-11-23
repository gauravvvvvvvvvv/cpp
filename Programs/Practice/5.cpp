/*If a program says : 
    Use a class named = Opr has 2 data of type float with name n1 and n2.
    has 3 functions = 1. get values(), 2. add values(), 3. multiplyvalues()
    
    then : how a class obj can be created in main() to execute it*/
#include<iostream>
using namespace std;
class Opr{
    float n1,n2;
    public:
        void get_values(){
            cout<<"Enter the value of n1: ";
            cin>>n1;
            cout<<"Enter the value of n2: ";
            cin>>n2;
        }
        void add_values(){
            cout<<"The sum is = "<<n1+n2<<endl;
        }
        void multiply_values(){
            cout<<"The product is = "<<n1*n2<<endl;
        }
};
int main(){
    Opr o1;
    o1.get_values();
    o1.add_values();
    o1.multiply_values();
}