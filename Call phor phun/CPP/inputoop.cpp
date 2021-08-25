#include<iostream>
using namespace std;

class Std{
    public:
        string name;
        int age;
        float percentage;

        Std(){
            name = "";
            age = 0;
            percentage = 0.0;
        }

        Std(string nam, int a, float per){
            name = nam;
            age = a;
            percentage = per;
        }
        
        void getdata(int i){
            cout<<"Please enter the name of student of roll no."<<i+1<<": ";
            getline(cin, name);
            cout<<"Please enter the age of student of roll no."<<i+1<<": ";
            cin>>age;
            cout<<"Please enter the percentage of the student of roll no."<<i+1<<": ";
            cin>>percentage;
        }

};

Std student[5];

int main(){
    for(int num=0; num<5; num++){
        student[num].getdata(num);
    }
    return 0;
}