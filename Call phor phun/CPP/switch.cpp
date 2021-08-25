#include<iostream>
using namespace std;

string day(int num)
{
    string daynum;
    switch(num){
        case 0:
            daynum = "Sunday";
            break;
        case 1:
            daynum = "Monday";
            break;
        case 2:
            daynum = "Tuesday";
            break;
        case 3:
            daynum = "Wednesday";
            break;
        case 4:
            daynum = "Thursday";
            break;
        case 5:
            daynum = "Friday";
            break;
        case 6:
            daynum = "Saturday";
            break;
        default:
            daynum = "Their is no such day in a week on earth'";
            break;

    }
    return daynum;
}


int main()
{
    int i;
    cout<<"Please enter the number whose parallel day you want to see";
    cin>>i;
    cout<<day(i);
    return 0;
}