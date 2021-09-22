#include<stdio.h>
#include<conio.h>
void main()
{float tf,tc;
clrscr();
printf("enter the temperature in fahrenheit degree:");
scanf("%f",tf);
tc=(tf-32)*5/9;
printf("temperatur in centigrade=%f",tc);
getch();
}
