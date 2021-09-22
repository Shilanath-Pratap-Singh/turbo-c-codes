#include<stdio.h>
#include<conio.h>
void main()
{int tsp,tp,tcp,cpo;
clrscr();
printf("enter the total selling price of 15 item:");
scanf("%d",&tsp);
printf("enter the total profit earned :");
scanf("%d",&tp);
tcp=tsp-tp;
cpo=tcp/15;
printf("cost price of one item is=%d",cpo);
getch();
}


