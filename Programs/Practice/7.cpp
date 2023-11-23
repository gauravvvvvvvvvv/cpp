//write a program to print the fibonacci series up to given user input,
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms you want to print in fibonacci series: ";
    cin>>n;
    int a=0,b=1,c;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-2;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}