/*
This code is written by SeungHwi Son
Student e-mail : sosa2007@g.skku.edu
*/

#include <stdio.h>
#include <math.h>
void PrintMenu(void);
int AskUserInput(void);
void DisplayResult(int result);

int main(void)
{ 
 PrintMenu();
 int input = AskUserInput();
 int result = pow(input,3);
 DisplayResult(result);
 
 return 0;
 } 
 
 void PrintMenu(void)
 {
    printf("Please input an integer:");
 }
 int AskUserInput(void)
 {
    int user_input;
    scanf("%d", &user_input);
    printf("You entered : %d\n", user_input);
    
    return user_input;
 }
 void DisplayResult(int result)
 {
 	printf("The result is : %d", result);
 }
