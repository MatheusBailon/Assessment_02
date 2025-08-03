#include "../headers/Book.h"

void Book::setBookDetails(
	string title,
	string author,
	string isbn,
	bool availability
) {
	Title = title;
	Author = author;
	ISBN = isbn,
	Availability = availability;
}

string Book::displayBook() {
	string message = "";
	message += "Title: " + Title + "\n";
	message += "Author: " + Author + "\n";
	message += "ISBN: " + ISBN + "\n";
	// /workspaces/Assessment_02/Assessment_02/Book.h


	return message;
}

string Book::borrowBook(){
	if(Availability){
		this->Availability = false;
		return "The Book: " + this->Title + " successfully reserved!! (- ‿◦ )";
	}

	return "Book not available, please try another one (ノ-_-)ノ ミ ┴┴";
}

string Book::returnBook(){
	if(Availability)
		return "Book is already available (ಠ_ಠ)";

	Availability = true;
	return "The Book: "+ this->Title + " returned successfully! ヽ(•‿•)ノ";
}
