#include<stdio.h>
#include<conio.h>
void main()
{
	int id,i;
	char n1[20],b1[20],n2[20],b2[20];
	clrscr();
	for(i=1;i<=2;i++)
	{
		printf("Enter Student ID:-");
		scanf("%d",&id);
		switch(id)
		{
		case 1:
		{
		printf("Enter the Student Name:-");
		scanf("%s",&n1);
		printf("Enter the Book Name:-") ;
		scanf("%s",&b1);
		}
		break;
		case 2:
		{
		printf("Enter the Student Name:-");
		scanf("%s",&n2);
		printf("Enter the Book Name:-") ;
		scanf("%s",&b2);
		}
		break;
		default :
		printf("Enter Valid ID");
		}
	}
		printf("ID:-1\n");
		printf("Student Name is:-%s\t\n",n1);
		printf("Book Name is:-%s\t\n",b1);

		/*printf("Enter the Student Name:-") ;
		scanf("%s",&s);
		printf("Enter the Book Name:-") ;
		scanf("%s",&b);*/
		printf("ID:-2\n");
		printf("Student Name is:-%s\t\n",n2);
		printf("Book Name is:-%s\t\n",b2);
		getch();

}