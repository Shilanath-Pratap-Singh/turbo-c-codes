#include<stdio.h>
#include<conio.h>
void main()
{float tf,tc;
clrscr();
printf("enter the temperature in fahrenheit:");
scanf("%f",&tf);
tc=(tf-32)*5/9;
printf("temperature in centigrade=%0.f",tc);
getch();
}