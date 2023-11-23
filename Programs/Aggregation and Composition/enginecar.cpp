#include<bits/stdc++.h>
using namespace std;
class engine{
    public:
        engine(){
            cout<<"Engine created"<<endl;
        }
        ~engine(){
            cout<<"Engine destroyed"<<endl;
        }
};
class car{
    public:
        engine e;
        car(){
            cout<<"Car created"<<endl;
        }
        ~car(){
            cout<<"Car destroyed"<<endl;
        }
};
int main(){
    car c;
    return 0;
}
