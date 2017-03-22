// Guess My Number
// The classic number guessing game

#include <iostream>
#include <cstdlib> // contains rand() and RAND_MAX
#include <ctime> // contains current time

using namespace std;

int main()
{
	/*
	 * Setup
	 */
	srand(static_cast<unsigned int>(time(0))); // seed the random number generator

	int secretNumber = rand() % 100 + 1; // random number between 1 and 100
	int tries = 0;
	int guess;
	cout << "\n\tWelcome to Guess My Number\n\n";

	/*
	 * Game loop
	 */
	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);

	return 0;
}
