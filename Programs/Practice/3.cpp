#include<iostream>
using namespace std;
class cricle{
        int r;
    public:
        float find_area(){
            r = 5;
            return 3.14*r*r;
        }
        float find_perimeter(){
            r = 5;
            return 2*3.14*r;
        }
};
int main(){
    cricle c1;
    cout<<"The area of circle is = "<<c1.find_area()<<endl;
    cout<<"The perimeter of circle is = "<<c1.find_perimeter()<<endl;
    return 0;
}