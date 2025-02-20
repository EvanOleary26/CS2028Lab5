#include "Movies.h"
#include "Shelf.h""
#include <iostream>

int main() {
	std::cout << "1. Add a movie to the shelf\n2. Remove a movie from the shelf\n3. See how many movies are currently on the shelf\n4. Quit" << std::endl;
	int opChoice = 0;

	while (true) {
		opChoice = 0;
		std::cin >> opChoice;
		if (opChoice == 1) {
			//addmovie
		}
		else if (opChoice == 2) {
			//removemovie
		}
		else if (opChoice == 3) {
			//countmovies
		}
		else if (opChoice == 4) {
			return 0;
		}
		else {
			std::cout << "Invalid input. Please choose a number from the list." << std::endl;
		}
	}
}
