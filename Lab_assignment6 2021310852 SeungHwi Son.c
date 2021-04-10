/*
This code is written by SeungHwi Son
Student e-mail : sosa2007@g.skku.edu
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{srand(time(NULL));

int RandomArray2[10][8];
int i, j;
int max, min;
float sum = 0, ave;

// Overall, second dimension array need a nested for loop, but it has similar shpae to exercise6
for(i = 0; i < 10; i++)
{
	for(j = 0; j < 8; j++)
	{
		RandomArray2[i][j] = rand() % 91 + 10; // we use integers  interval 10~100
	}
}

for(i = 0; i < 10; i++)
{
	for(j = 0; j < 8; j++)
	{
		printf("%d ", RandomArray2[i][j]);
	}
	printf("\n"); // After printing out 8 numbers, changer the line to distinguish
}

//Below is very similar to exercise6 except that this use nested for loop, so explanation skip!
max = RandomArray2[0][0];
for(i = 0; i < 10; i++)
{
	for(j = 0; j < 8; j++)
	{
		if (max < RandomArray2[i][j])
	    {
		max = RandomArray2[i][j]; 
	    }
    }
}

min = RandomArray2[0][0];
for(i = 0; i < 10; i++)
{
	for(j = 0; j < 8; j++)
	{
		if (min > RandomArray2[i][j])
	    {
		min = RandomArray2[i][j]; 
	    }
    }
}

printf("The larger value of second dimension random array is : %d\n", max);
printf("The smallest value of second dimension random array is : %d\n", min);

for(i = 0; i < 10; i++)
{
	for(j = 0; j < 8; j++)
	{
		sum = sum + RandomArray2[i][j];
	}
}
ave = sum / 80;
printf("The average value of second dimension random array is : %f", ave);
}
