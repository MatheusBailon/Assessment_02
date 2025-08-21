#pragma once
#include <iostream>
#include "Book.h"
#include <vector>
using namespace std;

const int seeder = 5;

vector<Book> createBooks(){
    
    Book HarryPotter;
    HarryPotter.setBookDetails(
        "Harry Potter Filosofal Stone",
        "J. K. Rowling",
        "123456",
        true,
        "14/03/2003"
    );

    Book Farm;
    Farm.setBookDetails(
        "Animal Farm",
        "George Orwell",
        "111111",
        false,
        "24/11/2013"
    );

    Book Hobbit;
    Hobbit.setBookDetails(
        "The Hobbit",
        "J.R.R. Tolkien",
        "111119",
        true,
        "02/12/1995"
    );

    Book Frank;
    Frank.setBookDetails(
        "Frankenstein",
        "Mary Shelley",
        "111121",
        true,
        "01/01/2000"
    );

    Book Moby;
    Moby.setBookDetails(
        "Moby Dick",
        "Herman Melville",
        "111117",
        false,
        "05/02/2004"
    );

    return {
        HarryPotter,
        Farm,
        Hobbit,
        Frank,
        Moby
    };
}
