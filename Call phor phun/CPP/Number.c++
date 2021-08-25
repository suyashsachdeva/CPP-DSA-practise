#include<iostream>

using namespace std;

int main(){
    int num = 5;
    double dnum = 5.5;

    // This happens because its easy to convert a lower storage sapce number to a higher storage space number 
    // but its difficult to convert a higher space occupying number to a lower space number.
    // When we do math operation with the same type of datatype then the datatype of the result will also be the same 
    // and as mentioned above if of two different types then the result will be of the upper storage datatype. 
    cout<<num + dnum ; 
    return 0;
}