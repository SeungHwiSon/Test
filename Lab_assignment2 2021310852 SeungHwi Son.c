/*
This code is written by SeungHwi Son
Student e-mail : sosa2007@g.skku.edu
*/
#include <stdio.h>

int main()
{
 int calender;
 printf("Enter the month, day, year in order(MMDDYYYY) :\n");
 scanf("%d", &calender);
 
 int year = calender % 10000;
 int month = calender / 1000000;
 int day = calender / 10000 % 100;
 
  
 // print out day information
 if (day > 31)
 {
 	printf("There is no that day");
 }
 else if (day == 11 || day == 12) // 11 and 12 are not written in 11st, 12nd So, it is exceptions
 {
 	printf("%dth", day);
 }
 else if (day % 10 == 1)
 {
 	printf("%dst", day);
 }
 else if (day % 10 == 2)
 {
 	printf("%dnd", day);
 }
 else if (day % 10 == 3)
 {
 	printf("%drd", day);
 }
 else if (day % 10 >= 3 && day <= 31 || day % 10 == 0)
 {
 	printf("%dth", day);
 }
 
 
 //print out month information 
 switch(month)
 {
    case 1 : 
 	 printf("January");
 	 break;
 	case 2 : 
 	 printf("Febraury");
 	 break;
 	case 3 : 
 	 printf("March");
 	 break;
 	case 4 : 
 	 printf("April");
 	 break;
 	case 5 : 
 	 printf("May");
 	 break;
 	case 6 : 
 	 printf("June");
 	 break;
 	case 7 : 
 	 printf("July");
 	 break;
 	case 8 : 
 	 printf("August");
 	 break;
 	case 9 : 
 	 printf("September");
 	 break;
 	case 10 : 
 	 printf("October");
 	 break;
 	case 11 : 
 	 printf("November");
 	 break;
 	case 12 : 
 	 printf("December");
 	 break;
 	default :
 	 printf(" There is no that month ");
 }
 
 //print out year information
 if (year > 2021)
 {
 	printf("That year has not come yet");
 }
 else
 {
 	printf("%d", year);
 } 
 return 0;
}


