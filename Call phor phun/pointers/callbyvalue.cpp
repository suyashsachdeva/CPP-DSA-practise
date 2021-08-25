#include<iostream>
using namespace std;

// Call by value
void inc(int a){
    a++;
    cout<<a<<endl;
}

// Call by reference
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=1, b=2;
    inc(a);
    cout<<a;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;

    return 0;
}