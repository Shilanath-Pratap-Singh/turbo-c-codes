#include<stdio.h>
#include<conio.h>
void main()
{int l,b,ar,p;
float rc,ac,cf;
clrscr();
printf("length of rectangle is:");
scanf("%d",&l);
printf("breadth of rectangle is:");
scanf("%d",&b);
printf("radius of circle is:");
scanf("%f",&rc);
ar=l*b;
p=2*(l+b);
ac=3.141*rc*rc;
cf=2*ac;
printf("area of rectangle is=%d\n",ar);
printf("perimetre of rectangle is=%d\n",p);
printf("area of circle is=%f\n",ac);
printf("circumference  is=%f\n",cf);
getch();
}