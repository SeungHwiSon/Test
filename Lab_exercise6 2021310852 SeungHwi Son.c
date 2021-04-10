/*
This code is written by SeungHwi Son
Student e-mail : sosa2007@g.skku.edu
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{srand(time(NULL));

int RandomArray[20];
int i; // declare to use in for loop
int max, min; 
float sum = 0, ave;


for(i = 0; i < 20; i++) // input random integers in array
{
  RandomArray[i] = rand() % 76 + 25; // we use integers  interval 25~100
}

printf("The random array is : ");

for(i = 0; i < 20; i++)
{
	printf("%d ", RandomArray[i]); // print out all random integers with for loop
}
printf("\n");

max = RandomArray[0]; // to print out largest value, check a integer from index 0 to index 24 
for(i = 0; i < 20; i++)
{
	if (max < RandomArray[i])
	{
		max = RandomArray[i]; // if right value larger than left value, right value is more larger value
	}                         // then, if there are no more larger value than left value, that is largest value
}

min = RandomArray[0]; // all process is similar to above process
for(i = 0; i < 20; i++)
{
		if (min > RandomArray[i])
	{
		min = RandomArray[i];
	}
}

printf("The largest value of random array is : %d\n", max);
printf("The smallest value of random array is : %d\n", min);

for(i = 0; i < 20; i++) //for loop for print out average
{
	sum = sum + RandomArray[i]; // all sum of array value
}
ave = sum / 20; //sum is divided by array's length = average
printf("The average of random array is : %f", ave);
}

