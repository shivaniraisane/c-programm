#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
int l,b,h,volume;
printf("enter the value of l,b,h");
scanf("%d%d%d",&l,&b,&h);
volume=l*b*h;
printf("%d",volume);
getch();
}