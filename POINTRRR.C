#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={5,15,25,35,45};
	/*int *ptr;
	clrscr();
	ptr=a+2;
	--ptr;
	--*ptr;
	++ptr;
	++*ptr;*/
	++a;
	++*a;
	--a;
	--*a;

	printf("%d\n",a[1]);
	printf("%d\n",a[0]);
	//printf("%d\n",a[2]);
	/*ptr=a; //3
	printf("%d\n",*ptr);
	++ptr;//
	printf("%d\n",*ptr);
	++*ptr;
	printf("%d\n",*ptr);
	--ptr;
	printf("%d\n",*ptr);
	--*ptr;
	printf("%d\n",*ptr);
	//printf("%d\n",*ptr);
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	//printf("%d\n",a[2]);
	//printf("%d\n",a[3]);
	//printf("%d\n",a[4]);*/
	getch();
}