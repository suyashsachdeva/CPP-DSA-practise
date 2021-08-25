#include<iostream>
using namespace std;

int main(){
    int num=7, guess, no=1;

    do{
        cout<<"Guess count number "<<no<<"to guess the number: ";
        cin>>guess;
        no++;
    }while(guess!=num);

    if(no<=3)
        cout<<"good";
    else if(3<no<=7)
        cout<<"intemediate";
    else
        cout<<"poor";

    return 0;
}