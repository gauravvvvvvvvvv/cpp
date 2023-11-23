#include<iostream>
using namespace std;
class Level1 {
public:
        virtual void show() {
                cout << "Level1 function called"<<endl;
        }
};
class Level2 : public Level1 {
public:
        void show() {
                cout << "Level2 function called"<<endl;
        }
};
class Level3 : public Level2 {
public:
        void show() {
                cout << "Level3 function called"<<endl;
        }
};
int main() {
        Level1 *l;
        Level1 l1;
        Level2 l2;
        Level3 l3;

        l = &l1;
        l->show();
        l = &l2;
        l->show();
        l = &l3;
        l->show();
        

        // l = new Level1;
        // l->show();
        // delete l;

        // l = new Level2;
        // l->show();
        // delete l;

        // l = new Level3;
        // l->show();
        // delete l;

        return 0;
}