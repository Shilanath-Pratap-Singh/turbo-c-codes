
#include<stdio.h>
#include<conio.h>
void main()
{int c,d;
clrscr();
printf("enter the value of c:");
scanf("%d",&c);
printf("enter the value of d:");
scanf("%d",&d);
printf("c=%d d=%d",c,d);
c=c+d;
d=c-d;
c=c-d;
printf("c=%d d=%d",c,d);
getch();
}
