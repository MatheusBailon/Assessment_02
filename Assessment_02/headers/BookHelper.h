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
        true
    );

    Book Farm;
    Farm.setBookDetails(
        "Animal Farm",
        "George Orwell",
        "111111",
        false
    );

    Book Hobbit;
    Hobbit.setBookDetails(
        "The Hobbit",
        "J.R.R. Tolkien",
        "111119",
        true
    );

    Book Frank;
    Frank.setBookDetails(
        "Frankenstein",
        "Mary Shelley",
        "111121",
        true
    );

    Book Moby;
    Moby.setBookDetails(
        "Moby Dick",
        "Herman Melville",
        "111117",
        false
    );

    return {
        HarryPotter,
        Farm,
        Hobbit,
        Frank,
        Moby
    };
}
