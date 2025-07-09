#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
    string title;
    string author;
    string isbn;

    cout << "Inform title: \n";
    getline(cin,title);

    cin.clear();
    fflush(stdin);

    cout << "Inform Author: \n";
    getline(cin,author);

    cin.clear();
    fflush(stdin);

    cout << "Inform ISBN: \n";
    getline(cin,isbn);

    cin.clear();
    fflush(stdin);

    Book test;

    test.setBookDetails(title, author, isbn);
    
    string textao = test.displayBook();
    cout << textao;
}
