#include<iostream>
using namespace std;

// class is declared outside main( Thing you should never froget).
class Book{
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    Book book1;
    book1.title = "DSA";
    book1.author = "I dont know";
    book1.pages = 1000;

    // You can't just say it to print book you have to specify the member that you wnat to show
    cout<<book1.title<<book1.author<<book1.pages;
     
    return 0;
}