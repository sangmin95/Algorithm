#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

void divide_conqure(int x, int y, int n);
void set_board(int  x, int y);
void print_board();

int N;
char board[3072][6144];

int main()
{
	scanf("%d", &N);

	divide_conqure((2*N-1)/2,0,N);
	print_board();
}

void divide_conqure(int x,int y,int n)
{
	if (n == 3)
	{
		set_board(x, y);
		return ;
	}
	divide_conqure(x, y, n / 2);
	divide_conqure(x - n / 2, y + n / 2, n / 2);
	divide_conqure(x + n / 2, y + n / 2, n / 2);
}


void set_board(int  x, int y)
{
	board[y][x] = '*';
	
	board[y+1][x-1]  = '*';
	board[y+1][x+1] = '*';
	
	board[y+2][x-2] = '*';
	board[y+2][x-1] = '*';
	board[y+2][x] = '*';
	board[y+2][x+1] = '*';
	board[y+2][x+2] = '*';
}

void print_board()
{
	for (int i = 0;i < N;++i)
	{
		for (int j = 0;j < 2 * N - 1;++j)
		{
			if (board[i][j] == '*')
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}