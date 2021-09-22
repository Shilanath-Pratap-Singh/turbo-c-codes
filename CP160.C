#include<stdio.h>
#include<conio.h>
int fun()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	if(n>=10&&n<=100)
	   return(n);
	else
	   return(n+32);


}
int main()
{
  clrscr();
  printf("%d",fun());
  getch();
}