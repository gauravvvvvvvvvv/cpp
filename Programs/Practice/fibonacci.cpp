//Write a program to print the sum of fibonacci series up to the given number.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int b=0,c=1,d=0;
    for(int i=0;i<a;i++){
        cout<<d<<" \n";
        d=b+c;
        b=c;
        c=d;
    }
}