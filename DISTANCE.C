#include<stdio.h>
#include<conio.h>
void main()
{float d,dm,df,di,dc;
clrscr();
printf("enter the disdance in km:");
scanf("%f",&d);
dm=d*1000;
df=dm*3.33;
di=df*12;
dc=dm*100;
printf("distance in meter=%0.2fm\n",dm);
printf("distance in ifeet=%0.2f ft\n",df);
printf("distance in inch=%0.2f inch\n",di);
printf("distance in centimetre=%0.2f cm\n",dc);
getch();
}