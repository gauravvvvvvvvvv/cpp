//Create diamond shape with stars.
#include <iostream>
using namespace std;
int main(){
    int i, j, n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= (n - i); j++){
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++){
            cout << "*";
        }
        cout << endl;
    }
    for (i = 1; i <= n; i++){
        for (j = 1; j <= (i - 1); j++){
            cout << " ";
        }
        for (j = 1; j <= (2 * n - 2 * i + 1); j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}