#include<iostream>
using namespace std;
// I always forget that clas is declared outside the main function  
class Std{
    public:
        string name;
        int roll;
        int year;
        char section;
        
        Std(){
            name = "";
            roll = 0;
            year = 0;
            section = '\0';
        }

        Std(string nam, int rn, int yr, char sec){
            name = nam;
            roll = rn;
            year = yr;
            section = sec;
            }
};

int main(){
    Std student1("Suyash", 1, 2, 'H');
    Std student2;
    student2.section = 'H';
    cout<<student1.name<<'\t'<<student2.section;

    return 0;
}