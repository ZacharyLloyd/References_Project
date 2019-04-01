//Swapping Bank Funds References Project

#include <iostream>
#include <string>

using namespace std;

void originalBalance(int x, int y); // Declaring orginalBalance function
void normalTransaction(int x, int y); // Declaring noramlTransaction function
void hackedTransaction(int& x, int& y); // Declaring hackedTransaction function with references
int normalBalance = 15000; // Declaring starting balance variable
int hackedBalance = 100; // Declaring hacked balance variable

int main()
{

	originalBalance(normalBalance, hackedBalance); //Calling orignalBalance function
	normalTransaction(normalBalance, hackedBalance); //Calling noramlTransaction function
	hackedTransaction(normalBalance, hackedBalance); //Calling hackedTransaction function

	system("pause");
	return 0;
}
//Creating originalBalance function
void originalBalance(int x, int y) 
{
	//Displaying orginalBalance function
	cout << "Original values\n";
	cout << "normalBalance: " << normalBalance << "\n";
	cout << "hackedBalance: " << hackedBalance << "\n\n";
}
//Creating noramlTransaction function
void normalTransaction(int x, int y)
{
	//Swapping the parameters
	int temp = x;
	x = y;
	y = temp;
	//Displaying normalTransaction function
	cout << "Calling normalTransaction()\n";
	cout << "normalBalance: " << normalBalance << "\n";
	cout << "hackedBalance: " << hackedBalance << "\n";
}
//Creating hackedTransaction function
void hackedTransaction(int& x, int& y)
{
	//Swapping the parameters
	int temp = x;
	x = y;
	y = temp;
	//Displaying hackedTransaction function
	cout << "Calling hackedTransaction()\n";
	cout << "normalBalance: " << normalBalance << "\n";
	cout << "hackedBalance: " << hackedBalance << "\n\n";
}