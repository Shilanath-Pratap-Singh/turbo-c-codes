#include<stdio.h>
#include<conio.h>
void  main()
{
	int i,e_s=2,arr[5],max,min;
	clrscr();
	printf("Enter The Array Element Size:");
	scanf("%d",&e_s);
	arr[e_s];
	printf("Enter The Element Of array:");
	for(i=0;i<e_s;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Entered Element Of Array are:-");
	for(i=0;i<e_s;i++)
	{
		printf("\narr[%d] = %d ",i,arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<e_s;i++)
	{
		if(max<arr[i])
		{
		   max=arr[i];
		}
		else
		{
		 min=arr[i];
		}
	}
	printf("\nmaximum element is %d",max);
	printf("\nminimum element is %d",min);
	getch();
}