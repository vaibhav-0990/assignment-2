/*distance between two points (a,b) and (c,d) -by vaibhav bhaskar,11912060,IT*/


#include<stdio.h>

#include<math.h>

int main()

{
	
         int a,b,c,d;
         float distance;

	 printf("enter the coordinates:\n");

	 scanf("%d%d%d%d",&a,&b,&c,&d);

	 distance=sqrt(pow((c-a),2)+pow((d-b),2));

	 printf("distance between the points is:%f",distance);

}



