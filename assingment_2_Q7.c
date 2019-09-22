/*program which reads a,b,c,p,q and r. let ax+by+c=0,and px+qy+r=0 be the two equations of lines. prints their point of inter section.-vaibhav bhaskar,11912060,IT*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,p,q,r,x,y;
	printf("Enter the values of a,b,c,p,q,r:\n");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
	x=((q*c)-(b*r))/((p*b)-(q*a));
	y=((b*a*r)+(c*q*a)-(a*q*c)-(c*p*b))/((b*b*p)-(b*q*a));
	printf("point of intersection of the given lines is: (%d,%d)",x,y);
}

		
