/*
	Ryan Curcio
	Ricky Lee
	Alan Lee

	Tic-Tac-Toe
	10/21/15
*/

#include <iostream>
#include <iomanip>
using namespace std;
#include "player.h"
#include "board.h"

int main()
{
	board b1;
	player p;

	p.getPlayerLetter();

	b1.display();	
	p.chooseSquare();


	return 0;
}