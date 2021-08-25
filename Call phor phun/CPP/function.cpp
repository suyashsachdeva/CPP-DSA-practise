#include<iostream>

using namespace std;

void hello(string name){
    
    cout<<"Hello "<<name;
}

int main()
{   
    string name;
    cout<<"Please enter your name ";
    getline(cin, name);
    hello(name);
    return 0;
}