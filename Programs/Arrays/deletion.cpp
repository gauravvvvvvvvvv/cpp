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
    cout<<"Enter the element you want to delete in this array: ";
    cin>>x;
    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            for(int j = i; j<n-1; j++){
                arr[j] = arr[j+1];
            }
            break;
        }
        else{
            cout<<"Element is not present in the array."<<endl;
            break;
        }
    }
    n--;
    cout<<"Final array is: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}