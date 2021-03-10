#include <iostream>
#include "NumberGuess.h"

int main()
{
	NumberGuess NumberGuess;

	std::cout << "Enter the smallest number: ";
	std::cin >> NumberGuess.min;

	std::cout << "Enter the largest number: ";
	std::cin >> NumberGuess.max;

	NumberGuess.number = NumberGuess.generate_number(NumberGuess.min, NumberGuess.max);

	NumberGuess.guess_number(NumberGuess.number);
}