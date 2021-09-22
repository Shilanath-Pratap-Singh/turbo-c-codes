#include<stdio.h>
int main()
{
	int num=25;
	clrscr();
	printf("num=25:%d\n",num);
	num+=10;
	printf("num+=10:%d\n",num);
	num-=5;
	printf("num-=5:%d\n",num);
	num*=2;
	printf("num*=2:%d\n",num);
	num/=3;
	printf("num/=3:%d\n",num);
	num%=3;
	printf("num%=3:%d\n",num);
	return 0;
}