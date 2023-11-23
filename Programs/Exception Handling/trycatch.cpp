#include<bits/stdc++.h>
using namespace std;
void divide(int x, int y, int z){
    cout<<"Inside the function"<<endl;
    if((x-y)!=0){
        int R = z/(x-y);
        cout<<"Result = "<<R<<endl;
    }
    else{
        throw(x-y);
    }
    cout<<"End of function"<<endl;
}
int main(){
    cout<<"Inside try block"<<endl;
    try{
        divide(10,20,30);
        //divide(10,10,20);
    }
    catch(int i){
        cout<<"Caught the exception"<<endl;
    }
    cout<<"End of main function"<<endl;
    return 0;
}