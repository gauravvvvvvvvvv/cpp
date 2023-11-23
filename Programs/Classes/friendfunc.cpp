#include<iostream>
using namespace std;
class A{
    int a=10;
    public:
        friend int add(A ob);
}ob, ob1;
int add (A ob){
    ob.a=28362;
    return (ob.a);
}
int main(){
    int x = add(ob1);
    cout<<add(ob)<<x<<endl;
    return 0;
}