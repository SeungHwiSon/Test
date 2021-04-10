/*
This code is written by SeungHwi Son
Student e-mail : sosa2007@g.skku.edu
*/
#include <stdio.h>

int main() 
{
	int num;
	float Circle_r; 
	float Rectangle_w; 
	float Rectangle_h; 
	float Triangle_w; 
	float Triangle_h; 
	
	printf("(1)Circle\n");
	printf("(2)Rectangle\n");
	printf("(3)Triangle\n");
	
	printf("Enter the number of shape you want :\n");
	scanf("%d", &num);
	

	if (num==1)
	{   
	    printf("Enter the radius of the circle :\n");
	    scanf("%f", &Circle_r);
	    float area_c = Circle_r * Circle_r * 3.14;
	    printf("The area of the circle is : %.3f\n", area_c);
    } // code for area of Circle calculation
	else if (num==2)
	{
	    printf("Enter the width of the rectangle :\n");
	    scanf("%f", &Rectangle_w);
	    printf("Enter the height of the rectangle :\n");
	    scanf("%f", &Rectangle_h);
	    float area_r = Rectangle_w * Rectangle_h;
	    printf("The area of the rectangle is : %.1f\n", area_r);	
    } // code for area of Rectangle calculation
	else if (num==3)
	{
		printf("Enter the width of the triangle :\n");
	    scanf("%f", &Triangle_w);
	    printf("Enter the height of the triangle :\n");
	    scanf("%f", &Triangle_h);
	    float area_t = Triangle_w * Triangle_h/2;
	    printf("The area of the rectangle is : %.1f\n", area_t);
    } // code for area of Triangle calculation
	
}
