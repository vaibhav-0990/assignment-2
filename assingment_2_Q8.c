/*program which reads a,b and c as sides of a triangle and prints the angle A in degree and radian.-vaibhav bhaskar,11902060,It*/

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,A;
	printf("Enter the sides of the triangle:\n");
	scanf("%f%f%f",&a,&b,&c);
	A=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
	printf("angle A of the given sides is:%f(in radians)",A);
	printf("angle A of the given triangle:%f(in degrees)",(A*(180/3.14)));
}

