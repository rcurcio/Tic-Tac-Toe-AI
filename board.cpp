#include <iomanip>
#include <iostream>
using namespace std;
#include "board.h"

board::board() : WIDTH(8), HEIGHT(5)
{
}

void board::printRow(int offset)
{
	cout << setfill(' ');

	for (int i = 0; i < HEIGHT - 1; i++){
		cout << setw(WIDTH) << "|";
		cout << setw(WIDTH) << "|";
		cout << setw(WIDTH) << "\n";
	}

	cout << setw(WIDTH - 1) << offset << "|";
	cout << setw(WIDTH - 1) << offset + 1 << "|";
	cout << setw(WIDTH - 1) << offset + 2 << "\n";
}

void board::display()
{
	cout << "\n\n\n";

	//Dimensions of 1 square 
	printRow(1);

	cout << setfill('-') << setw(WIDTH * 3) << "-" << endl;

	printRow(4);

	cout << setfill('-') << setw(WIDTH * 3) << "-" << endl;

	printRow(7);

	cout << "\n\n\n";
}
