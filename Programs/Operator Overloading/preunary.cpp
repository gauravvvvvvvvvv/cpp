#include<iostream>
using namespace std;
class A{
    int x;
    public:
        A(int a){
            x = ++a;
        }
        void display(){
            cout<<x<<endl;
        }
};
int main(){
    A a(10);
    a.display();
    return 0;
}