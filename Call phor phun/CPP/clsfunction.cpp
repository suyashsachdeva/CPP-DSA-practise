#include<iostream>
using namespace std;

class Student{
    public:
        string nam;
        string snam;
        int cls;
        char sec;
        int cgpa;

        Student(){
            nam = "None";
            snam = "None";
            cls = 0;
            sec = 'N';
            cgpa = 0;
        }

        Student(string name, string sname, int clas, char section, int mark){
            nam = name;
            snam = sname;
            cls =clas;
            sec = section;
            cgpa = mark;
        }

        bool pass(){
            if(cgpa>3.0)
                return true;
            else
                return false;
        }

};


int main(){
    Student stud1("Ass", "Hole", 69, 'X', 6.9);
    Student stud2("Fuck", "Off", 6, 'X', 1.4 );

    cout<<stud1.pass()<<endl;
    cout<<stud2.pass();

    return 0;
}