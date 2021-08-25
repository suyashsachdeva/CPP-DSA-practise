#include<iostream>
using namespace std;

int cube(int a)
{
    return a*a*a;
}

int main()
{
    int a;
    cout<<"Enter a value: ";
    cin>>a;
    cout<<cube(a);
    int answer = cube(3);
    cout<<answer;
    return 0;
}
