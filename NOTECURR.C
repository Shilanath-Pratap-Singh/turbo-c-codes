#include<stdio.h>
#include<conio.h>
void main()
{int rs1,rs2,rs5,rs10,rs50,rs100,n;
clrscr();
printf("enter the a sum of Rs:");
scanf("%d",&n);
rs100=n/100;
n=n%100;
rs50=n/50;
n=n%50;
rs10=n/10;
n=n%10;
rs5=n/5;
n=n%5;
rs2=n/2;
n=n%2;
rs1=n/1;
printf("Rs 100 notes is=%d\n",rs100);
printf("Rs 50 notes is=%d\n",rs50);
printf("Rs 10 notes is=%d\n",rs10);
printf("Rs 5 notes is=%d\n",rs5);
printf("Rs 2 notes is=%d\n",rs2);
printf("Rs 1 notes is=%d\n",rs1);
getch();
}