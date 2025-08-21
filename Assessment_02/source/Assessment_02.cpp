#include <iostream>
#include <cstdlib>
#include "../headers/Book.h"
#include "../headers/BookHelper.h"
#include <limits>
#include <algorithm>

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
    cout << "| 2 - Insert a book              |" << endl;
    cout << "| 3 - Reserve a book by ISBN     |" << endl;
    cout << "| 4 - Return a book by ISBN      |" << endl;
    cout << "| 5 - Sort list of books         |" << endl;
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
    cout << "The Book was not found" << endl;
    return nullptr;
}

void returnBook(){
    string isbn;
    
    cout << "Please inform the book to be returned by using ISBN Number: " << endl;
    cin >> isbn;
    Book* foundBook = searchBook(isbn);

    if(foundBook == nullptr)
        return;
    
    cout << foundBook->returnBook() << endl;
}

void reserveBook(){
    
    string isbn;
    
    cout << "Please select a book to reserver using ISBN Number: " << endl;
    cin >> isbn;
    Book* foundBook = searchBook(isbn);

    if(foundBook == nullptr)
        return;
    
    cout << foundBook->borrowBook() << endl;
}

void clearBuffer(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}

bool getAvailability(){
    char availability;

    cout << "Inform if the book is available or not (Y/N): " << endl;
    availability = getchar();

    switch(availability){
        //Y or y
        case 89 :
        case 121:
            return true;
            break;
        //N or n
        case 78 :
        case 110:
            return false;
            break;
        default:
            cout << "Incorrect value informed, try again." << endl;
            getAvailability();
            break;
        
    }
    return false;
}

void insertBook(){

    string title, author, isbn, dateAdd;

    clearBuffer();
    cout << "Inform the Title of this book: " << endl;
    getline(cin,title);

    cout << "Inform the Author of this book: " << endl;
    getline(cin,author);
    
    cout << "Inform the ISBN of this book: " << endl;
    cin >> isbn;
    clearBuffer();

    cout << "Inform the date when the book were added on the format (DD/MM/YYYY): " << endl;
    cin >> dateAdd;
    clearBuffer();

    Book livro;
    livro.setBookDetails(title,author,isbn,getAvailability(),dateAdd);

    Library.push_back(livro);

    cout << livro.displayBook() << endl;

}

void sortBook(){
    
    cout << "Sorting book list by Title in alphabetical order! " << endl;
    for(int i=0; i < Library.size() - 1 ; i++){

        for(int j = i+1; j < Library.size(); j++){
            
            string first = Library[i].Title;
            transform(first.begin(),first.end(),first.begin(),::toupper);
            
            string second = Library[j].Title;
            transform(second.begin(),second.end(),second.begin(),::toupper);

            if(first > second){
                Book temp = Library[i];
                Library[i] = Library[j];
                Library[ j] = temp;
            }

        }

    }

    cout << "Sort Done! " << endl;
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
                listBook();
                break;
            case 2:
                insertBook();
                break;
            case 3:
                reserveBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                sortBook();
                break;
            default:
                break;
        }
    }
    
    
    
}


