#include <stdio.h>

int main()
{
	int Number_1;
	int Number_2;
	int Sum;
	
	printf("Input the first number :");
	scanf("%d", &Number_1);
	printf("Input the second number :");
	scanf("%d", &Number_2);
	
	Sum = Number_1 + Number_2;
	printf("Sum : %d", Sum);	
}
