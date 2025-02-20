#include "Shelf.h"

void Shelf::addMovie(std::string inTitle) {
	if (index < SIZE) {
		Movies* movie = new Movies(inTitle);
		items[index] = *movie;
		index++;
	}
	//throw StackOverflow;
}

Movies Shelf::remMovie() {
	if (index > 0) {
		index--;
		return items[index];
	}
	//throw StackUnderflow;
}

bool const Shelf::isEmpty(){
	return index == 0;
}

bool const Shelf::isFull(){
	return index == SIZE;
}
