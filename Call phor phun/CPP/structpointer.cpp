#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    int age;
    double salary;
};

int main(){
    Person p1 = {"Suyash", 19, 0.0};
    cout<<p1.name<<endl;
    cout<<p1.age<<endl;
    cout<<p1.salary<<endl;

    Person* ptr = &p1;
    cout<<ptr->name;

    return 0;
}