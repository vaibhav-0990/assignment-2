/*program which reads a,b and c.let x2+y2+ax+by+c=0 be the equation of a circle.print its centre and radius.-vaibhav bhaskar 11912060,IT*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,x,y; float r;
	printf("Enter the values of a,b,c respectively:\n");
	scanf("%d%d%d",&a,&b,&c);
	x=(-a)/2;
	y=(-b)/2;
	r=sqrt(pow(x,2)+pow(y,2)-(c));
	printf("coordinates of center:(%d,%d)",x,y);
	printf("RAdius of the given circle is:%f",r);
}


