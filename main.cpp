#include "Movies.h"
#include "Shelf.h"

#include <iostream>
#include <string>

int main() {
	std::cout << "1. Add a movie to the shelf\n2. Remove a movie from the shelf\n3. See how many movies are currently on the shelf\n4. Quit" << std::endl;
	int opChoice = 0;
	Shelf shelf;

	while (true) {
		opChoice = 0;
		std::cin >> opChoice;
		if (opChoice == 1) {
			//addmovie
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Igitnore '\n' for getline
			std::cout << "What is the title of the movie you would like to add?" << std::endl;
			std::string title;
			std::getline(std::cin,title);
			//Movies *movie = new Movies(title);
			shelf.addMovie(title);
		}
		else if (opChoice == 2) {
			//removemovie
			std::cout << "Removed " << shelf.remMovie().getTitle() << " from the shelf" << std::endl;
		}
		else if (opChoice == 3) {
			//countmovies
			shelf.getIndex();
		}
		else if (opChoice == 4) {
			return 0;
		}
		else {
			std::cout << "Invalid input. Please choose a number from the list." << std::endl;
		}
	}
	return 0;
}
