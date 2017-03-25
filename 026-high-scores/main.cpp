// High Scores
// Demonstrates algorithms

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <random>

using namespace std;

int main()
{
	vector<int>::const_iterator iter;

	cout << "Creating a list of scores.";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nFinding a score.";
	int score;
	cout << "\nEnter a score to find: ";
	cin >> score;
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end())
	{
		cout << "Score found.\n";
	}
	else
	{
		cout << "Score not found.\n";
	}

	cout << "\nRandomizing scores.";

	// does not work on the Mac - kept getting non-random results
	// srand(static_cast<unsigned int>(time(0)));
	// random_shuffle(scores.begin(), scores.end());

	// used http://stackoverflow.com/questions/22481910/rand-broken-on-os-x-mavericks-xcode-5-1-or-is-this-a-massive-security-hole instead
	random_device rd;
	mt19937 g(rd());
	shuffle(scores.begin(), scores.end(), g);

	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nSorting scores.";
	sort(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}
