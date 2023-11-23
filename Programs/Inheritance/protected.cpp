#include<iostream>
using namespace std;
class A{
    protected:
        int a;
    public:
        void get_a(int n){
            a = n;
        }
};
class B: protected A{
    int b;
    public:
        void get_ab(int x, int y){
            get_a(x);
            b = y;
        }
        void display(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
};
int main(){
    B obj;
    obj.get_ab(10, 20);
    obj.display();
    return 0;
}