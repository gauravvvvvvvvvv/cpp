#include <bits/stdc++.h>
using namespace std;
template <typename T>
T square_area(T side) {
    return side * side;
}
int main() {
    int side_int = 5;
    cout << "Area of square " << side_int << " is " << square_area(side_int) << endl;
    return 0;
}