/* program which reads a,b,c,d,e,f numbers as input and outputs the area of triangle whose end points are (a,b),(c,d)and(e,f).-vaibhav bhaskar,11912060,IT*/


#include<stdio.h>

#include<math.h>

int main()

{
	int a,b,c,d,e,f;
        float area;

	printf("Enter the coordinates :\n");

	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

	area= (0.5*(a*(d-f)-b*(c-e)+((c*f)-(d*e))));

	printf("Area of the triangle is:%f",area);


}

