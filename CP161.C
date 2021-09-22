#include<stdio.h>
#include<conio.h>
void fun(int);
int main()
{
  int a=30;
  clrscr();
  fun(a);
  printf("%d\n",a);
  getch();
  return (0);
}
void fun(int b)
{
  b=60;
  printf("%d\n",b) ;

}
