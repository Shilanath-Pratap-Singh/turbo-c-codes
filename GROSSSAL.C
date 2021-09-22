#include<stdio.h>
#include<conio.h>
void main()
{int bs,da,ha,gs;
clrscr();
printf("ramesh basic salary is:");
scanf("%d",&bs);
da=bs*40.0/100;
ha=bs*20.0/100;
gs=bs+da+ha;
printf("gross salary is=%d",gs);
getch();
}