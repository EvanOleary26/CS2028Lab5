#ifndef __SHELF_HPP
#define __SHELF_HPP

#include "Movies.h"

const int SIZE = 10;

class Shelf {
    private:
        Movies items[SIZE];
        int index = 0;
    public:
        //Constructor 
        Shelf() : index(0) {}

        //Add Movie
        void addMovie(Movies inMovie);

        //Remove Movie
        Movies remMovie();

        //isEmpty and isFull
        bool isEmpty();
        bool isFull();
};









#endif