#pragma once
#include <string>
#include <ctime>

using namespace std;

class Book {


public:
	string Author;
	string ISBN;
	string Title;
	bool Availability;
	tm DateAdd;

	void setBookDetails(
		string title,
		string author,
		string isbn,
		bool availability,
		string dateAdd);

	string displayBook();

	string borrowBook();
	string returnBook();
};