#include "../headers/Book.h"
#include <sstream>
#include <iomanip>
#include "DateTimeHelper.h"

// using namespace std;

void Book::setBookDetails(
	string title,
	string author,
	string isbn,
	bool availability,
	string dateAdd
) {
	Title = title;
	Author = author;
	ISBN = isbn,
	Availability = availability;
	
	string cleanedDate = removeSpecialCharacterFromDate(dateAdd);
	istringstream ToBeParsed(cleanedDate);
	ToBeParsed >> get_time(&DateAdd, "%d%m%Y");
}

string Book::displayBook() {
	string message = "";
	string day,month,year;
	message += "Title: " + Title + "\n";
	message += "Author: " + Author + "\n";
	message += "ISBN: " + ISBN + "\n";
	message += "Date Add: " + dateToString(DateAdd) + "\n";


	return message;
}

string Book::borrowBook(){
	if(Availability){
		this->Availability = false;
		return "The Book: " + this->Title + ", successfully reserved!! (- ‿◦ )";
	}

	return "Book not available, please try another one (ノ-_-)ノ ミ ┴┴";
}

string Book::returnBook(){
	if(Availability)
		return "Invalid option, book is already available (ಠ_ಠ)";

	Availability = true;
	return "The Book: "+ this->Title + ", returned successfully! ヽ(•‿•)ノ";
}
