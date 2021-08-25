// Class was made to make our custom datatypes to represent various type of objects from the real world 
// in the code that we are writing. This is a user defined datatype 
// Class allows to compile multiple variable or characterstics to be declared under one variable 

#include<iostream>
using namespace std;

// All the elements in the class are by default private.
// In cpp we have 3 access modifiers:-
//   1. Private(default): Whatever is inside this is not going to be accessable outside this class. 
//   2. Protected: This is a modifier that is between public and private. This thing is used when inheritance comes into play
//   3. Public: Whatever is public in the class will be accessable to the complete program and can be accessed anywhere.

class Emp{
    private:
    protected:
    public:
        // These are properties of a class 
        string name;
        string company;
        int age;

        // These are class methods
        void specifications(){
            cout<<"Name: "<<name;
            cout<<"\nCompany: "<<company;
            cout<<"\nAge: "<<age;
        }

        // Constructor 
        Emp(string nam, string com, int a){
            name = nam;
            company = com;
            age = a;
        }
        
};

// Class is also a datatype therefore it also declared in the same way as the other datatype of cpp
// first we put the name of the class and then we declare the variable. Just like int i; 
int main(){
    Emp employ = Emp("Nobdoy", "Any", 30);
    // employ.name = "Nobody";
    // employ.company = "Any";
    // employ.age = 30;
    employ.specifications();

    // Here if we want to create more objects then we would face a lot of problem so here comes the use of constructor
    Emp employ2 = Emp("Anybody", "NOname", 29);
    // employ2.name = "Anybody";
    // employ2.company = "Nothing";
    // employ2.age = 30;

    employ2.specifications();

    return 0;
}