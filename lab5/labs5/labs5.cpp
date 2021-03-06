#include "stdafx.h"

struct country
{
	char * name;
	int population;
	int area;
};

void printCountry(country arg1)
{
	printf("name: %s\n", arg1.name);
	printf("population = %d\n", arg1.population);
	printf("area = %d\n", arg1.area);

}

int main()
{
	int i, index = 0; 
	float density = 0, minDens = 0;

	country A = { "USA",321368000,9834000 };
	country B = { "Ukraine",42444919,603628 };
	country C = { "Germany",80854000,357376 };

	country countries[3];
	countries[0] = { "USA",321368000,9834000 };
	countries[1] = { "Ukraine",42444919,603628 };
	countries[2] = { "Germany",80854000,357376 };
	
	minDens = countries[0].population / countries[0].area;

	for (i = 1; i < 3; i++)
	{
		density = countries[i].population / countries[i].area;

		if (density < minDens)
		{
			minDens = density;
			index = i;
		}
	}

	printCountry(countries[index]);


	_gettch();
    return 0;
}

