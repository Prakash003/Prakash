#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("Enter any number");
scanf("%d",&num);
if(num>0)
{
printf("number is positive");
}
if(num<0)
{
printf("number is negative");
}
if(num==0)
{
printf("number is zero");
}
getch();
}
