#include <iomanip>
#include <iostream>
using namespace std;
#include "board.h"

board::board()
{
	/*for (int i = 0; i < sizeof(quad); i++) {
		quad[i] = "(" + (i + 1) + ")";
	`}*/
}


void board::display()
{
	const int WIDTH = 8;
	const int HEIGHT = 5; 

	for (int i = 0; i < HEIGHT; i++){
		cout << setw(WIDTH) << "|" << setw(WIDTH) << "|" << setw(WIDTH) << "\n";
	}

	cout << setfill('-') << setw(WIDTH * 3) << "-" << endl;

	for (int i = 0; i < HEIGHT; i++){
		cout << setfill(' ') << setw(WIDTH) << "|" << setw(WIDTH) << "|" << setw(WIDTH) << "\n";
	}

	cout << setfill('-') << setw(WIDTH * 3) << "-" << endl;

	for (int i = 0; i < HEIGHT; i++){
		cout << setfill(' ') << setw(WIDTH) << "|" << setw(WIDTH) << "|" << setw(WIDTH) << "\n";
	}
}
