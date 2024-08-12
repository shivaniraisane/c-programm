#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float r,h,cone;
printf("enter the value of r and h");
scanf("%f%f",&r,&h);
cone=(1*3.14*r*r*h)/3;
printf("%f",cone);
getch();
}