#include <stdio.h>
#include "stdafx.h"
#include <string.h>


int main()
{
	char a[100];
	int i, id, max, k, len, min;

	fgets(a, 100, stdin);

	len = strlen(a);
	min = len;
	max = 0;
	id = 0;
	k = 0;

	for (i = 0; i < len;i++)
	{
		if (a[i] != ' ')
		{
			k += 1;
		}
		else
		{
			if (k > max)
			{
				max = k;
				id = i - k;
			}
			k = 0;
		}
	}

	if (k > max)
	{
		max = k;
		id = i - k;
	}
	max += id;

	printf("max slovo:\n");

	for (i = id; i < max; i++)
	{
		putchar(a[i]);
	}
	//
	printf("\n");


	len = strlen(a);
	a[len - 1] = ' ';
	min = len;
	max = 0;
	id = 0;
	k = 0;
	
	for (i = 0; i < len; i++)
	{
		if (a[i] != ' ')
		{
			k += 1;
		}
		else
		{
			if (k < min)
			{
				min = k;
				id = i - k;
			}
			k = 0;
		}
	}

	min += id;

	printf("min slovo:\n");

	for (i = id; i < min; i++)
	{
		putchar(a[i]);
	}
	printf("\n");
	
	_gettch();

    return 0;
}

