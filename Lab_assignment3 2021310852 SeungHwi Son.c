/*
This code is written by SeungHwi Son
Student e-mail : sosa2007@g.skku.edu
*/

#include <stdio.h>

int main(){
	
	float CurrencyConversion(float AmountInWon, float rate)
	{
		float result = AmountInWon * rate;
		return result;
	}
	
	
	float won;
	int number;
	float dollar;
	float euro;
	float yen;
	float rmb;
	
	printf("Please choose which currency you want to convert:\n");
	printf("1 -Korean Won to US Dollar (Exchange Rate: 0.000905)\n");
	printf("2 -Korean Won to Euro (Exchange Rate: 0.000807350908)\n");
	printf("3 -Korean Won to Japanese Yen (Exchange Rate: 0.0919061643)\n");
	printf("4 -Korean Won to Chinese RMB (Exchange Rate: 0.00603703605)\n");
	printf("5 -Quit\n");
	
	printf("Enter your option:\n");
	scanf("%d", &number);
	
	while (number != 5)
	{
		switch(number)
		{
			case 1 :
			    printf("Enter the amount in Korean Won:\n"); //These statements must be in every case statement.                                                                 
	            scanf("%f", &won);                           //Because, if these are out of while loop, user inputs won value again when inputs option '5'
	            
			    dollar = CurrencyConversion(won, 0.000905);
			    printf("%.3f Won eqauls to %f USD\n", won, dollar);
			    
				break;
			
			case 2 :
			    printf("Enter the amount in Korean Won:\n");
	            scanf("%f", &won);
				
				euro = CurrencyConversion(won, 0.000807350908);
			    printf("%.3f Won equals to %f Euro\n", won, euro);
			    
				break;
			
			case 3 :
				printf("Enter the amount in Korean Won:\n");
	            scanf("%f", &won);
				
				yen = CurrencyConversion(won, 0.0919061643);
				printf("%.3f Won equals to %f Yen\n", won, yen);
				
				break; 
			
			case 4 :
				printf("Enter the amount in Korean Won:\n");
	            scanf("%f", &won);
				
				rmb = CurrencyConversion(won, 0.00603703605);
				printf("%.3f Won equals to %f RMB\n", won, rmb);
				
				break;
			
			default :	
			    printf("You entered invaild input.\n");
			    
				break;
		}
	    
		printf("\nEnter your option:\n");
	    scanf("%d", &number);
	}
	
	printf("\nThank you for using my exchange rate calculator.\n"); //Always be smile to customers :)
	
	return 0;
}
