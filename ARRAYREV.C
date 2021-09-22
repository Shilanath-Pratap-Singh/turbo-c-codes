#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	//intialize array
	/*int arr[]={1,2,3,4,5},i,length;
	//calculate length of array arr
	length=sizeof(arr)/sizeof(arr[0]);
	printf("Original array:\n");
	for(i=0;i<length;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");

	printf("Array in reverse order:\n");
	//loop through the array in reverse order
	for(i=length-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	} */


		//intialize array
	char* arr[]={"kunal","chanakya","sweta"};
	int i,length;
	clrscr();
	//calculate length of array arr
	length=sizeof(arr)/sizeof(arr[0]);
	printf("Original array:\n");
	for(i=0;i<length;i++)
	{
		printf("%s   ",arr[i]);
	}
	printf("\n");

	printf("Array in reverse order:\n");
	//loop through the array in reverse order
	for(i=length-1;i>=0;i--)
	{
		printf("%s  ",arr[i]);
	}


}