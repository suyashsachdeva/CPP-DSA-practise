#include<iostream>
using namespace std;

int main(){
    int i = 10,*ptr = &i,**ptr2 = &ptr;
    cout<<"The value is "<<i<<endl;
    cout<<"The pointer to the above value is "<<ptr<<endl;
    cout<<"The degree 2 pointer to the above value is "<<ptr2<<endl;

    return 0;    
}