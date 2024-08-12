#include<stdio.h>
#include<conio.h>
void main()
{

float force,area,pressure;
printf("enter the value of force and area");
scanf("%f%f",&force,&area);
pressure=force/area;
printf("%f",pressure);
getch();
}