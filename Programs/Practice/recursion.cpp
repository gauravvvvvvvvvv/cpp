/*Create a recursion function for finding a factorial of user input*/
#include<iostream>
using namespace std;
int factorial(int n);
int factorial(int n){
        if(n==1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}