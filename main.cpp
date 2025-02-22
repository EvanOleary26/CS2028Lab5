#include "Movies.h"
#include "Shelf.h"

#include <iostream>
#include <string>

int main() {
	
	Shelf shelf;
	while (true) {
		std::cout << "\n1. Add a movie to the shelf\n2. Remove a movie from the shelf\n3. See how many movies are currently on the shelf\n4. Quit" << std::endl;
		int opChoice = 0;
		
		opChoice = 0;
		std::cin >> opChoice;
		if (opChoice == 1) {
			//addmovie
			if (shelf.getIndex() < SIZE) {
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Igitnore '\n' for getline
				std::cout << "\nWhat is the title of the movie you would like to add?" << std::endl;
				std::string title;
				std::getline(std::cin,title);
				Movies *movie = new Movies(title);	//Dynamically create a new movie
				shelf.addMovie(*movie);
				std::cout << title << " was added to the shelf." << std::endl;
			}
			else {
				std::cout << "\nThere is not enough room on the shelf. Please remove a movie before adding a new one." << std::endl;
			}

		}
		else if (opChoice == 2) {
			//removemovie
			if (shelf.getIndex() > 0) {
				std::cout << "\nRemoved " << shelf.remMovie().getTitle() << " from the shelf." << std::endl;
			} else {
				std::cout << "There are no movies on the shelf. Please add a movie if you want to remove a movie" << std::endl;
			}
			
		}
		else if (opChoice == 3) {
			//countmovies
			std::cout << "\nThere are " << shelf.getIndex() << " movies in the shelf." << std::endl;
		}
		else if (opChoice == 4) {
			//exit the program
			return 0;	
		}
		else {
			std::cout << "\nInvalid input. Please choose a number from the list." << std::endl;
		}
	}
	return 0;
}
