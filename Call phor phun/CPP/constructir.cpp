#include<iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;

        // Constructor is automatically excuted as the class is called so we are using this to take automatic inputs 
        // rather than entering every value manually
        // The best part being that we can declare mumltiple contructors according to our needs

        // creation of multiple constructor gives the user multiple ways to enter values into the class

        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }
        Book(string atitle, string aauthor, int apage){
            title = atitle;
            author = aauthor;
            pages = apage;
        }
};


int main(){
    // With the introduction of condtructor now we dont have to enter every single value and we can 
    // directly pass the values while declaring. This just eases our work and all the other 
    // operations of classes are valid.
    Book book1("DSA", "Dankimemer", 300);
    Book book2("Hello world", "heloo", 500);
    Book book3;

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////// FINALLY C++ //////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////