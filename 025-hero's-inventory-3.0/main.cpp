// Hero's Inventory 3.0
// Demonstrates iterators

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> inventory;

	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "Your items:\n";
	// inventory.end() returns an iterator one past the last element of the vector
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		// Dereferencing an iterator
		// * is a dereference operator
		// placing * in front of iter displays the element to which
		// the iterator refers, rather than the iterator itself
		cout << *iter << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	myIterator = inventory.begin();
	// assign "battle axe" to the element that myIterator references
	// rather than the iterator itself
	*myIterator = "battle axe";
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nThe item name '" << *myIterator << "' has ";
	// Whenever you dereference an iterator to access a data member or
	// member function, surround the dereferenced iterator by a pair of
	// parentheses. This ensures the dot operator will be applied to the
	// object the iterator references. Alternatively...
	cout << (*myIterator).size() << " letters in it.\n";

	cout << "\nThe item name '" << *myIterator << "' has ";
	// ...use the -> (known as the indirect member selection operator)
	// syntax
	cout << myIterator->size() << " letters in it.\n";

	cout << "\nYou recover a crossbow from a slain enemy.";
	inventory.insert(inventory.begin(), "crossbow");
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nYour armor is destroyed in a fierce battle.";
	inventory.erase((inventory.begin() + 2));
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}
