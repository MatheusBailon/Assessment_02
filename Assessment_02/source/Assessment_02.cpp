#include <iostream>
#include <cstdlib>
#include "../headers/Book.h"
#include "../headers/BookHelper.h"

using namespace std;

vector<Book> Library = createBooks();


void clearConsole(){

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void menu(){

    cout << "---------------------------------" << endl;
    cout << "|        SELECT ON OPTION        |" << endl;
    cout << "|                                |" << endl;
    cout << "| 1 - List all books available   |" << endl;
    cout << "| 2 - Reserve a book by ISBN     |" << endl;
    cout << "| 3 - Return a book by ISBN      |" << endl;
    cout << "| 0 - Exit                       |" << endl;
    cout << "---------------------------------" << endl << endl;
}

void listBook(){
    cout << "This is the list of Books: \n\n";
    
    for(Book book: Library){
        cout << book.displayBook() <<endl;
    }
}

Book* searchBook(string isbn){

    for (int i=0; i < Library.size() ;i++ ){

        if(Library[i].ISBN == isbn){
            return &Library[i];
        }
    }
    return nullptr;
}

void returnBook(){
    string isbn;
    
    cout << "Please inform the book to be returned by using ISBN Number: " << endl;
    cin >> isbn;
    Book* foundBook = searchBook(isbn);

    if(foundBook == nullptr){
        cout << "The Book was not found!! "<< endl;
        return;
    }
    
    cout << foundBook->returnBook() << endl;
}

void reserveBook(){
    
    string isbn;
    
    cout << "Please select a book to reserver using ISBN Number: " << endl;
    cin >> isbn;
    Book* foundBook = searchBook(isbn);

    if(foundBook != nullptr)
    {
        cout << foundBook->borrowBook() << endl;
        return;
    }

    cout << "No book were found" << endl;
}

int main()
{
    int option;

    while (option!=0){
        
        menu();
        cin >> option;
        clearConsole();
        switch(option){
            case 1:
                ListBook();
                break;
            case 2:
                ReserveBook();
                break;
            case 3:
                ReturnBook();
                break;
            default:
                break;
        }
    }
    
    
    
}


