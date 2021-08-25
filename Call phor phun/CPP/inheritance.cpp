#include<iostream>
using namespace std;

// This is called the super class
class Cook{
    public:
        void chick(){
            cout<<"Chicken bana raha he";
        }
        void egg(){
            cout<<"Egg bana raha he";
        }
        void veg(){
            cout<<"Vegetable bana raha he";
        }
};

// This is inheritance in this the function is going to take all the properties of the class and public is the visiblity 
// of the class given to the lower class.
// In this we can also over write the function by redeclaring the in the lower class this will overwrite the function


// This is a sub class
class Me : public Cook{
    public:
    // This is overwriting of the fuction  
            void chick(){
            cout<<"Nahi banana ata he mujhko";
        }
        void bkchod(){
            cout<<"Bakchodi kar raha he ";
    }

};

int main(){
    Cook chef;
    chef.chick();

    Me suyash;
    suyash.chick();
    suyash.bkchod();

    return 0;
}