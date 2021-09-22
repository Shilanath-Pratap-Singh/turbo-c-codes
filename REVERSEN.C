#include<stdio.h>
#include<conio.h>
void main()
{int n,n1,n2,n3,n4,n5,sum;
clrscr();
printf("enter five digit number:");
scanf("%d",&n);
n1=n%10;
n=n/10;
n2=n%10;
n=n/10;
n3=n%10;
n=n/10;
n4=n%10;
n=n/10;
n5=n%10;
printf("%d",n1);
printf("%d",n2);
printf("%d",n3);
printf("%d",n4);
printf("%d",n5);
getch();
}
