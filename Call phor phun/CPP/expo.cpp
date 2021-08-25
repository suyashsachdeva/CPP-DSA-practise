// This program was made to find the power of the function using a for loop 

#include<iostream>
#include<cmath>
using namespace std;

int power(int num, int p);
int forpow(int num, int p);

int main(){
    int num, p;
    cout<<"Please enter two number for base and the power of that number number: ";
    cin>>num>>p;
    cout<<power(num, p);
    cout<<forpow(num, p);
    return 0;
}


int power(int num, int p){
    return pow(num, p);
}

int forpow(int num, int p){
    int result = 1;
    for(int i=0; i<p; i++){
        result = result*num;
    }
    return result;
}