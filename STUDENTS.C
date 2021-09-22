#include<stdio.h>
#include<conio.h>
void main()
{int s1,s2,s3,s4,s5,am,pm;
clrscr();
printf("enter the five subject  marks:");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
am=s1+s2+s3+s4+s5;
pm=am/5;
printf("aggregate marks=%d\nmarks in percent=%d%",am,pm);
getch();
}
