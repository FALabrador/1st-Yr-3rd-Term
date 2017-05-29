#include <iostream>
using namespace std;

struct board{
	int HEIGHT = 3;
	int WIDTH = 3;
	char gameBoard[3][3];
}tBoard;

void BlankBoard(char GameBoard[3][3])
{
	char board = '-';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tBoard.gameBoard[i][j] = board;
        }
    }
}

void PrintBoard(char GameBoard[3][3])
{
    for (int i = 0; i < 3; i++)
    {
    	cout << "ROW "<< i+1 << " ";
        for (int j = 0; j < 3; j++)
        {
            cout <<"| "<<tBoard.gameBoard[i][j];
        }
        cout << " |\n";
    }
}

int main(){
	char GameBoard[3][3];
	cout << "=================" << endl;
	cout << "   TIC TAC TOE" << endl;
	cout << "=================" << endl;
	cout << "	A  B  C" << endl;
	BlankBoard(GameBoard);
	PrintBoard(GameBoard);
	
	
}
