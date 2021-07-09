//program of function
#include<stdio.h>
int main()
{
	
int area,l;
printf("enter l:");
scanf("%d",&l);
area=3.142*l*l;
printf("area of a circle%d",area);
return 0;
}

int circle(int l)
	{
	int area_of_a_circle;
	area_of_a_circle=3.142*l*l;
	return area_of_a_circle;
}
