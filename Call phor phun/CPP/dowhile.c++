#include<iostream>
using namespace std;

int main()
{
    int i = 6;

    // The difference between do while and simple while is that while is a entry controlled loop therefore it checks before entry and
    // can only excute if the condition satisfies but on the other hand do while is a exit controled loop therefore the code insidde 
    // the loop will atleast run once 
    do{
        cout<<i;
        i++;
    }while(i<=5);

    return 0;
}