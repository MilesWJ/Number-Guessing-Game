#include "NumberGuess.h"
#include <iostream>
#include <ctime>

int NumberGuess::generate_number(int min, int max)
{
	srand(time(NULL));
	int number = rand() % max + min;
	return number;
}

void NumberGuess::guess_number(int number)
{
	int tries = 1;

	while (true) {
		int guess;
		std::cout << "\nEnter your guess: ";
		std::cin >> guess;

		if (guess == number) {
			std::cout << "Correct, the number was " << number << ". It took you " << tries << " tries!" << std::endl;
			break;
		}

		else if (guess > number)
		{
			std::cout << "Incorrect, your guess was too high..." << std::endl;
			tries++;
			continue;
		}

		else if (guess < number)
		{
			std::cout << "Incorrect, your guess was too low..." << std::endl;
			tries++;
			continue;
		}
	}
}