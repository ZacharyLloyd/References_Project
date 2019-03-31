// Swap
// Demonstrates passing references to alter argument variables

#include <iostream>

using namespace std;

void normalTransaction(int x, int y);
void hackedTransaction(int& x, int& y);

int main()
{
	int myScore = 150;
	int yourScore = 1000;
	cout << "Original values\n";
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	cout << "Calling hackedTransaction()\n";
	hackedTransaction(myScore, yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";

	cout << "Calling normalTransaction()\n";
	normalTransaction(myScore, yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n";

	return 0;
}

void hackedTransaction(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void normalTransaction(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}