#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
int x,y,z,average;
printf("enter the value of x,y,z");
scanf("%d%d%d",&x,&y,&z);
average=(x+y+z)/3;
printf("%d",average);
getch();
}