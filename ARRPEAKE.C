#include<stdio.h>
#include<conio.h>
int findpeak(int arr[],int n)
{
	int i;
	if(n==1)
	return 0;
	if(arr[0]>=arr[1])
	return 0;
	if(arr[n-1]>arr[n-2])
	return n-1;
	//check for every other element
	for(i=1;i<n-1;i++)
	{
		//check if the neighbours are smaller
		if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1])
		return i;
	}
}
void main()
{
	int arr[]={1,3,20,4,1,0};
	int n;
	clrscr();
	n=sizeof(arr)/sizeof(arr[0]);
	findpeak(arr,n);
	printf("%d",findpeak(arr,n));
}