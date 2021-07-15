#include<stdio.h>
#include<math.h>
int main()
{
    float r,area,circumference,h;
    printf("enter the radius of the circle :: \n");
    scanf("%f",&r);
    area=(3.14)*r*r;
    circumference=6.14*r;
    printf("circumference = %f\n",circumference);
    printf("area of circle is = %f \n",area);
	return 0;
}

//enter the radius of the circle ::
//20
//circumference = 122.800003
//area of circle is = 1256.000000
