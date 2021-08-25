#include<iostream>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();

int main(){
    int num;
    char ch;

    top:
    cout<<"\t\tMenu\n";
    cout<<"Press 1 for addition\n";
    cout<<"Press 2 for subtraction\n";
    cout<<"Press 3 for multiplication\n";
    cout<<"Press 4 for division\n\n";
    cout<<"Please enter your choice: ";
    cin>>num;

    switch(num){
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        default:
        cout<<"Ginti nahi aati kya?";
            goto top;

    }

    cout<<"Want the solution of more problems(Y/N): ";
    cin>>ch; 

    if(ch== 'Y' || ch == 'y')
        goto top;   
    return 0;
}

void addition(){
    int n1, n2;

    cout<<"Please enter 2 numbers for addition";
    cin>>n1>>n2;
    cout<<"The sum of the 2 numbers entered is "<<n1+n2;
}

void subtraction(){
    int n1, n2;

    cout<<"Please enter 2 numbers for subtraction";
    cin>>n1>>n2;
    cout<<"The difference of the 2 numbers entered is "<<n1-n2;
}

void multiplication(){
    int n1, n2;

    cout<<"Please enter 2 numbers for multiplication";
    cin>>n1>>n2;
    cout<<"The product of the 2 numbers entered is "<<n1*n2;
}

void division(){
    int n1, n2;

    cout<<"Please enter 2 numbers for division";
    cin>>n1>>n2;
    cout<<"The division of the 2 numbers entered is "<<n1/n2*1.0;
}