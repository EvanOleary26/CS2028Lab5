#include "Shelf.h"

void Shelf::addMovie(Movies inMovie) {
	if (index < SIZE) {
		items[index] = inMovie;
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
