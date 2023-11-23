#include<iostream>
using namespace std;
class mother{
    public:
        void display(){
            cout<<"Mother"<<endl;
        }
}m;
class child1:public mother{
    public:
        void display(){
            cout<<"Child 1"<<endl;
        }
}c1;
class child2 :public mother{
    public:
        void display(){
            cout<<"child 2"<<endl;
        }
}c2;
class child3 :public mother{
    public:
        void display(){
            cout<<"child 3"<<endl;
        }
}c3;
int main(){
    m.display();
    c1.display();
    c2.display();
    c3.display();
    return 0;
}