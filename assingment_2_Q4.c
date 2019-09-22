/*program which reads a,b,c.let ax+by+c=0 be the equation of a line.the program outputs the slope.-vaibhav bhaskar,11912060,IT*/

#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,m;
	printf("Enter the values of a,b,c respectively:\n");
	scanf("%f%f%f",&a,&b,&c);
	m=((-a)/b);
	printf("output:%f",m);

}

