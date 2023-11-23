#include<iostream>
using namespace std;
class info{
    public :
            void show();
};
void info::show(){
    cout<<"Jai Shree Ram"<<endl;
}
int main(){
    info a1;
    a1.show();
    return 0;
}