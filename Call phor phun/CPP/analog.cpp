#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

int main(){
    int num, roll, count=0;
    float fl=0.0;
    string str = "";
    cout<<"Please enter your roll number: ";
    cin>>roll;

    // For binary
    num = roll;
    while(num != 0){
        int i;
        count = count+1;
        i = num%2;
        fl = fl/10.0 + i;
        num = (num-i)/2;
    }
    cout<<fl*pow(10,count-1)<<endl;

    // This is for octal
    fl=0.0;
    num =roll;
    count = 0;
    while(num != 0){
        int i;
        count = count+1;
        i = num%8;
        fl = fl/10.0 + i;
        num = (num-i)/8;
    }
    cout<<fl*pow(10,count-1)<<endl;


    // For hexadecimal
    fl=0.0;
    num=roll;
    count=0;
    while(num != 0){
        int i;
        string ch;
        count = count+1;
        i = num%16;
        if (i<10)
            ch = to_string(i);
        else{
                switch(i){
                    case 10:
                        ch = "A";
                        break;
                    case 11:
                        ch = "B";
                        break;
                    case 12:
                        ch = "C";
                        break;
                    case 13:
                        ch = "D";
                        break;
                    case 14:
                        ch = "E";
                        break;
                    case 15:
                        ch = "F";
                        break;
                    default:
                        ch ="" ;
                        break;
                }
            }
        str=ch+str;
        num = (num-i)/16;
    }
    cout<<str;

    return 0;
}