/*program which reads h,k,r and s.let a circle has center (h,k) and radius r. let line x=s intersects the circle,the program should calculate the chord length.-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
#include<math.h>
int main()
{
	int  h,k,r,s,l;
	printf("enter the values of h,r,k,s:\n");
	scanf("%d%d%d%d",&h,&r,&k,&s);
        l=sqrt((r*r)-(h-s)*(h-s));
	printf("the length of chord:%d",(2*l));
}

			
			

	



