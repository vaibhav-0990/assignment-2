/*program which reads a,b,c as sides of triangle and prints its area -by vaibhav bhaskar,11912060,IT*/


#include<stdio.h>

#include<math.h>

int main()

{
	
              int s1,s2,s3,s;
              float area;

	      printf("Enter the sides of the triangle:\n");

	      scanf("%d%d%d",&s1,&s2,&s3);

	      s=(s1+s2+s3)/2;

	      area=sqrt(s*(s-s1)*(s-s2)*(s-s3));

	      printf("Area of the triangle:%f",area);

}




