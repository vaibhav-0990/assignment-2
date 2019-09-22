/*program which reads a,b,c,d,e,f,g and h. let ax+by+cz+d=0 be aplane and x2+y2
 * +z2+ex+fy+gz+h=0 be a sphere . find the area of circle of interssection of the plane and the sphere.-vaibhav bhaskar,11912060,IT*/

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f,g,h,x,y,z,r,R,dist,area;
	printf("Enter the values of a,b,c,d,e,f,g,h:\n");
	scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
	x=(-e/2);
	y=(-f/2);
	z=(-g/2);
	dist=(fabs(((a*x)+(b*y)+(c*z)+d)/((sqrt(pow(a,2))+(pow(b,2))+(pow(c,2))))));
	R=sqrt((pow(x,2)+pow(y,2)+pow(z,2)));
	r=sqrt((pow(dist,2)+pow(R,2)));
	area=(3.14*r*r);
	printf("area of circle:%f",area);
}




