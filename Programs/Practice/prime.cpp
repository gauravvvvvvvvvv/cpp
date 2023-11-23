//Check if a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    for(int i=2;i<a;i++){
        if(a%i==0){
            cout<<"The number is not prime."<<endl;
            break;
        }
        else{
            cout<<"The number is prime."<<endl;
            break;
        }
    }
}