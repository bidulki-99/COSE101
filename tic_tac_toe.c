#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include <time.h>
#include <windows.h>

int main()
{
	char board[3][3];
	int x, y, i, j, k = 0;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';

	while (k < 9)
	{
		if (((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) && board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' ||
			((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' ||
			((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) && board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ' ||
			((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) && board[0][0] != ' ' && board[1][0] != ' ' && board[2][0] != ' ' ||
			((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) && board[0][1] != ' ' && board[1][1] != ' ' && board[2][1] != ' ' ||
			((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) && board[0][2] != ' ' && board[1][2] != ' ' && board[2][2] != ' ' ||
			((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) && board[0][0] != ' ' && board[1][1] != ' ' && board[2][2] != ' ')
		{
			printf("게임이 종료되었습니다.\n");
			break;
		}

		else
		{
			printf("(x, y) 좌표 : ");
			scanf("%d %d", &x, &y);

			if (board[x][y] == ' ')
			{
				board[x][y] = (k % 2 == 0) ? 'X' : 'O';
				k++;
			}

			else printf("다른 자리를 선택해 주세요.\n");

			for (i = 0; i < 3; i++)
			{
				printf("---|---|---\n");
				printf(" %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
			}
			printf("---|---|---\n");
		}

	}
}
