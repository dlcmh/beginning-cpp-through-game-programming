// Hero's Inventory
// Demonstrates arrays

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";

	cout << "Your items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";
	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name'" << inventory[0] << "' has ";
	cout << inventory[0].size() << " letters in it.\n";

	cout << "\nYou find a healing potion.";
	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		cout << "You have too many items and can't carry another.";
	}

	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}

	cout << "\n\nAlternative method for declaring and filling an Array with elements";
	string places[] = {"Kuala Lumpur", "Singapore", "Ipoh"};

	// http://stackoverflow.com/questions/4108313/how-do-i-find-the-length-of-an-array/25144257#25144257
	cout << "\n\nGetting the length of an array that does not have a predefined size\n";

	auto placesBegin = begin(places);
	cout << "Step 1: begin(places): " << placesBegin << endl;

	auto placesEnd = end(places);
	cout << "Step 2: end(places): " << placesEnd << endl;

	auto placesLength = placesEnd - placesBegin;
	cout << "Step 3: end(places) - begin(places): " << placesLength;

	cout << "\nYour places:\n";
	for (int i = 0; i < placesLength; ++i)
	{
		cout << places[i] << endl;
	}

	return 0;
}
