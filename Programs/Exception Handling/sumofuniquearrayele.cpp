#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    int n, sum =0;
    cin>>n;
    if(n>15){
        cout<<"-1";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    l.assign(arr, arr+n);
    l.sort();
    l.unique();
    for(auto x:l){
        sum+=x;
    }
    cout<<sum;
    return 0;
}