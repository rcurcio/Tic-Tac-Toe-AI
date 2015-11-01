// Represents the board and holds the current state
class board
{
	private:
		const int WIDTH;
		const int HEIGHT;

	public:
		board();
		void display();
		void printRow(int offset);
};