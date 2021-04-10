#include <stdio.h>

int main()
{
	int John_score;
	int Mary_score;
	int Peter_score;
	int Jane_score;
	float average;
	
	printf("Enter John's score :");
	scanf("%d", &John_score);
    printf("Enter Mary's score :");
	scanf("%d", &Mary_score);
    printf("Enter Peter's score :");
	scanf("%d", &Peter_score);
	printf("Enter Jane's score :");
	scanf("%d", &Jane_score);
	
	int sum = John_score + Mary_score + Peter_score + Jane_score;
	average = sum/4;
	printf("average : %f", average);
 

}
