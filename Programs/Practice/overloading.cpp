/*perform function overloading, with or without class but use 1. based on different data type of parameters and 2. based on different return type of parameters*/
#include<iostream>
using namespace std;

    void add(int a, int b){
        cout<<a+b<<endl;
    }
    void add(double a, double b){
        cout<<a+b<<endl;
    }
    void add(int a, int b, int c){
        cout<<a+b+c<<endl;
    }
    void add(double a, double b, double c){
        cout<<a+b+c<<endl;
    }
    void add(int a, double b){
        cout<<a+b<<endl;
    }
    void add(double a, int b){
        cout<<a+b<<endl;
    }
    void add(int a, int b, double c){
        cout<<a+b+c<<endl;
    }
    void add(double a, double b, int c){
        cout<<a+b+c<<endl;
    }
    void add(int a, double b, int c){
        cout<<a+b+c<<endl;
    }
    void add(double a, int b, double c){
        cout<<a+b+c<<endl;
    }
    void add(int a, double b, double c){
        cout<<a+b+c<<endl;
    }
    void add(double a, int b, int c){
        cout<<a+b+c<<endl;
    }

int main(){
    
    add(1,2);
    add(1.1,2.2);
    add(1,2,3);
    add(1.1,2.2,3.3);
    add(1,2.2);
    add(1.1,2);
    add(1,2,3.3);
    add(1.1,2.2,3);
    add(1,2.2,3);
    add(1.1,2,3.3);
    add(1,2,3.3);
    add(1.1,2,3);
    return 0;
}