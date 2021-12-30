//calculate the area of circumference
#include<stdio.h>
int main()
{
int circle_radius;
float pi_value=3.14,circle_area,circle_circumf;

printf("\n enter radius of circle: ");
scanf("%d",&circle_radius);


circle_area = pi_value*circle_radius*circle_radius;
printf("\n area of circle is: %f",circle_area);

circle_circumf = 2*pi_value*circle_radius;
printf("\n circumference of circle is: %f",circle_circumf);

return(0);
}