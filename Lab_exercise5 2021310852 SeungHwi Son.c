/*
This code is written by SeungHwi Son
Student e-mail : sosa2007@g.skku.edu
*/

#include <stdio.h>

int GCD(int m, int n){
	if (n==0) // base code : if m%n 's remainder is 0, small integer is GCD
	{
	   return m;
	}
	else // If it has remainder more than 0, (small integer)%(reaminder) is continued until it has 0 remainder(base code)
	{
	   return GCD(n,m%n);
    }
}

int main(){
	
	int integer1;
	int integer2;
	
	printf("Please enter first integers:");
	scanf("%d", &integer1);
	printf("Please enter second integers:");
	scanf("%d", &integer2);
	
	printf("Greatest Common Denominator of two integers you entered : %d",GCD(integer1,integer2));
	
	return 0;
}
