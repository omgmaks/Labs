#include "stdafx.h"

int main()
{
	int a[5][5];
	int i, j, max = 0;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf_s("%d,%d", &a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i][j] % 2 == 1)
			{
				if (a[i][j] > max)
				{
					max = a[i][j];
				}
			}
		}
	}
	printf("max odd = %d", max);

	_gettch();

    return 0;
}















