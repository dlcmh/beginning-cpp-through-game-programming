// Word Jumble
// The classic word jumble game where the player can ask for a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// init a 2-dimensional array with words and their corresponding hints
	enum fields {WORD, HINT, NUM_FIELDS}; // NUM_FIELDS will equal 2 owing to its position
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly, is it?"},
		{"persistent", "Keep at it"},
		{"jumble", "It's what this game is all about."}
	};

	// pick a random word
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; // word to guess
	string theHint = WORDS[choice][HINT]; // hint for the word

	// jumble the word - generate 2 random positions in the string object
	// and swap the characters at those positions. Repeat a number of times
	// equal to the length of the word.
	string jumble = theWord; // jumbled version of word
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	// Welcome the player
	cout << "\t\t\tWelcome to the Word Jumble!\n\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'hint' for a hint.\n";
	cout << "Enter 'quit' to quit the game.\n\n";
	cout << "The jumble is: " << jumble;

	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;

	// Enter the game loop
	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
		}
		else
		{
			cout << "Sorry, that's not it.";
		}

		cout << "\n\nYour guess: ";
		cin >> guess;
	}

	// Handle when player has won or quit
	if (guess == theWord)
	{
		cout << "\nThat's it! You guessed it!\n";
	}

	cout << "\nThanks for playing.\n";

	return 0;
}
