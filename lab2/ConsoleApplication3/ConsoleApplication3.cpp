#include "stdafx.h"


int main()
{
	int a[10];
	int i = 0;
	float s = 0,k = 0,ch = 0;

	for (i = 0; i < 10; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d",& a[i]);
	}
	for (i = 1; i < 10; i = i + 2)
	{
		k++;
		s += a[i];
	}
	ch = s / k;

	printf("Arithmetic mean = %.2f \n", ch);

	_gettch();

    return 0;
}

