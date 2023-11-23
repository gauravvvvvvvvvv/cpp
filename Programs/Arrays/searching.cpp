#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        if(i==1){
            cout<<"Enter "<<i<<" st element: ";
        }
        else{
            cout<<"Enter "<<i<<" th element: ";
        }
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search in this array: ";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element is present in the array at : "<<i<<endl;
            break;
        }
    }
    if(arr[i]!=x){
        cout<<"Element is not present in the array."<<endl;
    }
    return 0;
}