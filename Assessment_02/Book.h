#pragma once
using namespace std;
#include <string>

class Book {


public:
	string Author;
	string ISBN;
	string Title;
	bool Availability;

	void setBookDetails(
		string title,
		string author,
		string isbn);

	string displayBook();

	// void borrowBook();
	// void returnBook();
};