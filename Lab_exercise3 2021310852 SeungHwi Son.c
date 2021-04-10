/*
This code is written by SeungHwi Son
Student e-mail : sosa2007@g.skku.edu
*/
#include <stdio.h>

int main(){

int counter = 0; // a variable for counting loop executing count
float x; // input a value from user
float sum;

printf("Enter the value\n :");
scanf("%f", &x);

 for(; x != -1 ;)
 {
    sum = sum+x;
	counter++;
	
	printf("Enter the another value,\n");
	printf("If you want to stop, enter -1\n :"); // mention a condition to stop loop
	scanf("%f", &x);
 } 	

float average = sum / counter;
printf("The average is :%f", average);
 
return 0;
	
}
