#include<iostream>
using namespace std;

int main(){
    // The difference between double and float is that double can store values with two timws more data than float
    // This makes double a heavy storage variable and is used wherever presion is needed but if so large values are 
    // not expected to occur then to ensure that the progeams runs fast we should change it to float.
    // Double can't run on a 32-bit processor as it needs 64-bit processer to run.

    // This is how a pointer is declared in c and c++
    // Always keep in mind that '&' is used to get the memeory location of the variable and *var in this '*' 
    // is used to declare that this variable will store the location of the variable. Adding the star will give 
    // out the value at that location. I short & gives the location of the variable and * does exactly opposite to what & does.
    // pointer is a container which stores the address of the variable. Pointer representation is also called dereference of 
    // the point. &* when used together then they end up nullifing their effect.

    int i = 25, *pi=&i;
    double j = 2.7, *pj=&j;
    string k = "Hello world", *pk=&k;

    cout<<i<<"=>"<<pi<<"\t"<<j<<"=>"<<*&pj<<"\t"<<k<<"=>"<<pk<<"\t";
    return 0;
}