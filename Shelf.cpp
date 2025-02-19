#include "Shelf.h"

void Shelf::addMovie(Movies inMovie){
    if (index < SIZE) {
        items[index] = inMovie;
        index++;
    }
    //throw StackOverflow
}



Movies Shelf::remMovie(){
    if (index > 0){
        index--;
return items[index];
}
//throw StackUnderflow
}

bool Shelf::isEmpty() {
    return index == 0;
}

bool Shelf::isFull() {
    return index == SIZE;
}
