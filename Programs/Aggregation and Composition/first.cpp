#include<bits/stdc++.h>
using namespace std;

class mechanic{
    private:    
        string name;
    public:
        mechanic(string n){
            name = n;
        }
        string getname(){
            return name;
        }
};

class car{
    private:
        string make;
        string model;
        int year;
        mechanic* m;
    public:
        car(string ma, string mo, int y, mechanic* me){
            make = ma;
            model = mo;
            year = y;
            m = me;
        }
        ~car(){
            delete m;
        }
        mechanic* getmechanic(){
            return m;
        }
        string getmake(){
            return make;
        }
        string getmodel(){
            return model;
        }
        int getyear(){
            return year;
        }
};

class key{
    private:
        car* c;
    public:
        key(car* ca){
            c = ca;
        }
        ~key(){
            delete c;
        }
        car* getcar(){
            return c;
        }
};

int main(){
    string mechname;
    string make;
    string model;
    int year;
    cout<<"Enter the name of the mechanic: ";
    cin>>mechname;
    cout<<"Enter the make of the car: ";
    cin>>make;
    cout<<"Enter the model of the car: ";
    cin>>model;
    cout<<"Enter the year of the car: ";
    cin>>year;
    mechanic* m = new mechanic(mechname);
    car* c = new car(make, model, year, m);
    key* k = new key(c);
    cout<<"The car is of make "<<k->getcar()->getmake()<<", model "<<k->getcar()->getmodel()<<", year "<<k->getcar()->getyear()<<endl;
    cout<<"The car is serviced by "<<k->getcar()->getmechanic()->getname()<<endl;
    return 0;  
}
