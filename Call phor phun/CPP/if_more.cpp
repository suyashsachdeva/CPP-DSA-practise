#include<iostream>
using namespace std;

int max(int num1, int num2)
{
    int result;
    if (num1>num2)
        result = num1;
    else
    result = num2;
   return result; 
}

int main()
{   
    int a,b;
    cout<<"Please enter two numbers for the result ";
    cin>>a>>b;
    cout<<"The maximum value out of the two is "<<max(a,b);
    return 0;
}