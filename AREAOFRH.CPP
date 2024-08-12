#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
float length,breadth,area;
printf("enter the value of length and breadth");
scanf("%f%f",&length,&breadth);
area=(length*breadth)/2;
printf("%f",area);
getch();
}