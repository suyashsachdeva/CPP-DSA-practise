#include<iostream>

using namespace std;

int main()
{
    string s = "Hello my name is Suyash Sachdeva";
    cout<<s<<"\n";
    cout<<"mujhko c++ par ek project karna he. Smile in Pain"<<endl;
    cout<<s.length();
    s[0] = 'F';
    cout<<s;
    // This find function requires 2 parameters the string we want to find and the second parameter is that where we want to start searching
    cout<<s.find("Suyash Sachdeva", 0);
    cout<<s.substr(8, 3);
    return 0;
}