/*program which reads a,b,c,d and e and prints the distance between point(a,b) and line cx+dy+e=0.-vaibhav bhaskar,11902060,IT*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	float distance;
	printf("Enter the values of a,b,c,d,e:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	distance=(a*c+b*d+e)/(pow(c*c+d*d,0.5));
	printf("outpot:%f",distance);
}


