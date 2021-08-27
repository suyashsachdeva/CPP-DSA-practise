#include<iostream>
using namespace std;

int main(){
    int* ptr;
    int var=7;
    int foo=21;
    cout << *ptr;
    ptr = &var;
    cout << *ptr;
 
    return 0;
}