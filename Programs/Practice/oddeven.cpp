//Write a program to find if a number is odd or even.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(a%2==0){
        cout<<"The number is even."<<endl;
    }
    else{
        cout<<"The number is odd."<<endl;
    }
}