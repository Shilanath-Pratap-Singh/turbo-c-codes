#include<stdio.h>
#include<conio.h>
union amp
{
	int id;
	long int f;
	int salary;
};
void main()
{
     union amp a;
     clrscr();
     printf("%d",sizeof(a));
     getch();
}