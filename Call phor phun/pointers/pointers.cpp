#include<iostream>
using namespace std;

int main(){
    // This is the variable 
    int a=10;
    // This is its pointer
    int *aptr = &a;

    cout<< *(&a)<<"=>"<<&a<< endl << *aptr << endl;
    // In pointers basically their is another memory location that is made which stores the location of the variable 
    // The star is used to tell the compiler that we are storing the location of this type in the varible we declare
    // '&' This just tells that give the location of the variable. Pointer is type sensative so if their is a pointer 
    // of int datatype then it will only store location of a int type 
    // '*' and '&' counter the action of each other 
    cout<<*aptr<<endl;
    *aptr = 20;
    cout<<*aptr<<endl;
    return 0;
}