#include "seating.h"

void seating_row(int max, int row[])
{
	int diff = MAX_SEATS - max;
	int start = diff / 2;

	int a = 0 + start;
	int b = MAX_SEATS - 1 - start;
	int i = max;

	for (; i > 0; i--)
	{
		if (i % 2 == 0)
		{
			row[b--] = i;
		}
		else
		{
			row[a++] = i;
		} 
	}
}

void print_seating_plan()
{
	char row_names[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	int row_seats[] = {8, 10, 12, 14, 18, 20, 22, 24};
	int rows[MAX_ROWS][MAX_SEATS] = {0};

	printf("Seating plan (%d * %d):\n\n", MAX_ROWS, MAX_SEATS);
 
	int i, j;

	for (i = 0; i < MAX_ROWS; i++)
	{
		seating_row(row_seats[i], rows[i]);
		printf("%c  ", row_names[i]);

		for (j = 0; j < MAX_SEATS; j++)
		{
			if (rows[i][j] > 0)
			{
				if (rows[i][j] < 10)
				{
					// 3 spaces, 1 digit
					printf(" %d  ", rows[i][j]);
				}
				else
				{
					// 2 spaces, 2 digits
					printf("%d  ", rows[i][j]);	
				}
			}
			else
			{
				// Four spaces
				printf("    ");
			}
		}

		printf("\n\n");
	}
}