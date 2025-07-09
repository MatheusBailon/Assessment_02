#include "Book.h"

void Book::setBookDetails(
	string title,
	string author,
	string isbn
) {
	Title = title;
	Author = author;
	ISBN = isbn;
}

string Book::displayBook() {
	string message = "";
	message += "Title: " + Title + "\n";
	message += "Author: " + Author + "\n";
	message += "ISBN: " + ISBN + "\n";
	


	return message;
}
