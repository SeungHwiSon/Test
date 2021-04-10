/*
This code is written by SeungHwi Son
Student e-mail : sosa2007@g.skku.edu
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{srand(time(NULL));

 int rdn1 = rand() % 6 + 1; // rdn means 'roll dice number'
 int rdn2 = rand() % 6 + 1;
 int rdn3 = rand() % 6 + 1;
 
 printf("%d %d %d\n", rdn1, rdn2, rdn3);
 
 if (rdn1 == rdn2 == rdn3) // condition to print out triple, big, small
 {
 	printf("TRIPLE!!!\n");
 }
 else if (rdn1+rdn2+rdn3 <= 10)
 {
 	printf("SMALL!\n");
 }
 else if (rdn1+rdn2+rdn3 > 10)
 {
 	printf("BIG!!\n");
 }
 
 return 0 ;
}
