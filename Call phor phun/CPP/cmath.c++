#include<iostream>
# include<cmath>

using namespace std;

int main(){
    // This is the power function it take to parameters in it first the base and then the pow 
    cout<<pow(2,5)<<endl;
    // It is the square root function and only takes the number whose square root has to be found
    cout<<sqrt(36)<<endl;
    // This is the round off funct. are round(to the closest int), ceil(to the upper int) and the floor(to the lower int)
    cout<<round(4.5)<<endl;
    cout<<ceil(3.1)<<endl;
    cout<<floor(5.999999999999)<<endl;
    // This function will compare the two values and will return bigger value of the two values
    cout<< fmax(3,10)<<endl;
    cout<< fmin(3,10)<<endl;

    return 0;

}