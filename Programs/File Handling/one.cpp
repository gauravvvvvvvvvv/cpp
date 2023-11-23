#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    char s[80];
    cout<<"Enter a string: ";
    cin>>s;
    int len = strlen(s);
    fstream file;
    file.open("one.txt",ios::in|ios::out);
    for(int i=0;i<len;i++){
        file.put(s[i]);
    }
    file.seekg(0);
    char ch;
    while(file){
        file.get(ch); 
        cout<<ch;
    }
    file.close();
    return 0;
}