/*call by value*/
#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout<<"After swap: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
int main(){
    int a=10, b=20;
    cout<<"Before swap: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    swap(a,b);
}