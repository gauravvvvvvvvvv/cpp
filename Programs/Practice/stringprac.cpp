#include<iostream>
using namespace std;
int main(){
    string x, y, z;
    getline(cin, x);
    getline(cin, y);
    getline(cin, z);

    cout<<x.find("is")<<endl;
    cout<<x.rfind("ok")<<endl;
    cout<<x.find_first_of("he")<<endl;
}