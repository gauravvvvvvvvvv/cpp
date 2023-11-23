#include<iostream>
using namespace std;

int main() {
    int num = 42;
    char chara = 'A';
    float dec = 3.14;
    double doub = 2.71828;

    int* ptr1 = &num;
    cout << "Integer value: " << *ptr1 << ", Address: " << ptr1 << endl;
    ptr1++;
    cout << "After increment - Integer value: " << *ptr1 << ", Address: " << ptr1 << endl;

    char* ptr2 = &chara;
    cout << "Character value: " << *ptr2 << ", Address: " << reinterpret_cast<void*>(ptr2) << endl;
    ptr2++;
    cout << "After increment - Character value: " << *ptr2 << ", Address: " << reinterpret_cast<void*>(ptr2) << endl;


    float* ptr3 = &dec;
    cout << "Float value: " << *ptr3 << ", Address: " << ptr3 << endl;
    ptr3++; 
    cout << "After increment - Float value: " << *ptr3 << ", Address: " << ptr3 << endl;


    double* ptr4 = &doub;
    cout << "Double value: " << *ptr4 << ", Address: " << ptr4 << endl;
    ptr4++;
    cout << "After increment - Double value: " << *ptr4 << ", Address: " << ptr4 << endl;

    return 0;
}
