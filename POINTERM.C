#include<stdio.h>
#include<conio.h>
#define size 10
int min(int *arr);
int main()
{
	int arr[size];
	int i,m;
	clrscr();
	printf("\nEnter %d Value:-",size);
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	m=min(arr);
	printf("\n%d",m);
	getch();
	return m;
}
int min(int *arr)
{
    int r,i;
    r=*(arr+0);
    for(i=0;i<size;i++)
    {
	if(*(arr+i)<r)//if (arr[i]<r)
	 r=*(arr+i);
    }
     return r;
}
