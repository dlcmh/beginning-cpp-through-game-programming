// Die Roller
// Demonstrates generating random numbers

#include <iostream>
#include <cstdlib> // contains rand() and RAND_MAX
#include <ctime>

using namespace std;

int main()
{
	cout << "\nRAND_MAX: " << RAND_MAX;

	time_t timeZero = time(0);
	cout << "\ntime(0): " << timeZero;

	unsigned int timeZeroCast = static_cast<unsigned int>(timeZero);
	cout << "\nstatic_cast<unsigned int>(time(0)): " << timeZeroCast;
	srand(timeZeroCast); // seed the random number generator

	int randomNumber = rand(); // generate random number
	cout << "\nrand(): " << randomNumber;

	int die = (randomNumber % 6) + 1; // get a number between 1 and 6
	cout << "\nYou rolled a " << die << endl;

	return 0;
}
