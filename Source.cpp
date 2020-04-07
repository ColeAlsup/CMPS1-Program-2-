// Cole Alsup
// Dr. Halverson
// Program 2
// Making Change

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{

	// Establishing ofstream to "output.txt"
	ofstream outfile;
	outfile.open("output.txt");

	// Defining count right from the get-go.
	int count;

	// Make Declarations for Change Making Process
	double TotAm;
	int DolBil, HalDol, Quar, Dime, Nick, Penn, CalAdj;

	// Setting up the while loop to obtain change for different amounts.
	count = 1;
	while (count <= 11)
	{

		// Prompt the user to input the Total Amount.

		cout << "Print the Total Amount, then press enter.\n";
		cin >> TotAm;

		CalAdj = TotAm * 100;

		DolBil = CalAdj / 100;
		


		count = count + 1;

	}



}