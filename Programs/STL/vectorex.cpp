#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(10);
    cout<<arr.size()<<endl;
    for(int i=0;i<=9;i++){
        arr[i]=i;
    }
    for(int i=10; i<=19; i++){
        arr.push_back(i);
    }
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.pop_back();
    cout<<arr.size()<<endl;

}