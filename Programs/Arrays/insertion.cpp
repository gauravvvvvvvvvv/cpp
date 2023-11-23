#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        if(i==1){
            cout<<"Enter "<<i<<" st element: ";
        }
        else{
            cout<<"Enter "<<i<<" th element: ";
        }
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to insert in this array: ";
    cin>>x;
    int loc;
    cout<<"Enter the location where you want to insert this element: ";
    cin>>loc;
    for(int i = n-1; i>=loc;i--){
        arr[i+1] = arr[i];
    }
    arr[loc] = x;
    n++;
    cout<<"Final array is: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}