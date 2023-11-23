#include<iostream>
#include<string>
int main(){
    char s[80];
    cout<<"Enter a string: ";
    cin>>s;
    int len = strlen(s);
    fstream file;
    file.open("one",ios::in|ios::out);