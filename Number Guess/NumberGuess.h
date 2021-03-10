#pragma once
class NumberGuess
{
public:
	int number;
	int guess;

	int min;
	int max;

	int generate_number(int min, int max);

	void guess_number(int number);
};