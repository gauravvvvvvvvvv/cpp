#include<iostream>
using namespace std;
class Array{
    int *arr;
    int size;
    public:
        void getdata(int n){
            size = n;
            arr = new int[size];
            for(int i = 0; i<size; i++){
                cout<<"Enter element"<<" "<<i+1<<": ";
                cin>>*(arr+i);
            }
        }
        void add(){
            int sum = 0;
            for(int i = 0; i < size; i++){
                sum += *(arr+i);
           }
           cout<<"\nSum of elements = "<<sum;
        }
};
int main(){
    Array a;
    int n;
    cout<<"Enter the number of elements to find the sum of: ";
    cin>>n;
    a.getdata(n);
    a.add();
    return 0;
}