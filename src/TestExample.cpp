//TODO: Display "Hello Class!" to the console

#include <iostream>
#include <string>
#include <random>

int main() {

	bool PlayAgain;

	int PlayerGuess = 0;

	// Initialize Random Number Generation
	std::mt19937 ri(static_cast<unsigned int>(std::time(0)));
	std::uniform_int_distribution<int> randomint(1, 100);

	int RandomNum = randomint(ri);
	int NumberOfAttempts = 0;


	std::cout << "Welcome to The Number Guessing Game but in C++!\n";
	std::cout << "Guess Your Number\n";

	while (RandomNum != PlayerGuess) {

		std::cin >> PlayerGuess;

		if (PlayerGuess < RandomNum) {

			std::cout << "Your Guess was too low\n";
			NumberOfAttempts++;
		}
		else if (PlayerGuess > RandomNum) {

			std::cout << "Your Guess was too high\n";
			NumberOfAttempts++;
		}
		else {

			std::cout << "Your Guess was Correct!\n";
			std::cout << "You guessed " << NumberOfAttempts << " amount of times\n";
			std::cout << "Thanks for Playing!";

		}

	}


	



	return 0;
}