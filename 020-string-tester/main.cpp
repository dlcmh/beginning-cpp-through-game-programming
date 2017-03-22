// String Tester
// Demonstrates string objects

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word1 = "Game";
	string word2("Over");
	string word3(3, '!');

	string phrase = word1 + " " + word2 + word3;
	cout << "The phrase is: " << phrase << "\n\n";
	cout << "Using size(), the phrase has " << phrase.size() << " characters in it.\n\n";
	cout << "Using length(), the phrase has " << phrase.length() << " characters in it.\n\n";
	cout << "The character at position 0 is: " << phrase[0] << "\n\n";

	cout << "Changing the character at position 0.\n";
	phrase[0] = 'L';
	cout << "The phrase is now: " << phrase << "\n\n";

	for (unsigned int i =0; i < phrase.size(); ++i)
	{
		cout << "Character at position " << i << " is: " << phrase[i] << endl;
	}

	cout << "\nThe sequence 'Over' begins at location ";
	cout << phrase.find("Over") << endl;

	// string::npos represents the largest possible size of a string object,
	// hence is greater than any possible valid postion number in a string object.
	cout << "\n\nstring::npos is " << string::npos << endl;
	if (phrase.find("eggplant") == string::npos)
	{
		cout << "'eggplant' is not in the phrase.\n\n";
	}

	phrase.erase(4, 5);
	cout << "The phrase is now: " << phrase << endl;

	phrase.erase(4);
	cout << "The phrase is now: " << phrase << endl;

	phrase.erase();
	cout << "The phrase is now: " << phrase << endl;

	if (phrase.empty())
	{
		cout << "\nThe phrase is no more.\n";
	}

	return 0;
}
