#include<stdio.h>
#include<conio.h>
void main()
{
	int f,g,h,i,j;
	char namea[30],nameb[30],namec[30],named[30],namee[30],a[20],
	b[20],c[20],d[20],e[20];
	clrscr();
	printf("Enter name of 5 students\n");
	printf("\n");
	printf("Enter name 1:\n");
	scanf("%s",namea);
	printf("Enter name 2:\n");
	scanf("%s",nameb);
	printf("Enter name 3:\n");
	scanf("%s",namec);
	printf("Enter name 4:\n");
	scanf("%s",named);
	printf("Enter name 5:\n");
	scanf("%s",namee);
	printf("\n");
	printf("Enter gender of 5 students\n");
	printf("\n");
	printf("Enter gender 1:");
	scanf("%s",a);
	printf("Enter gender 2:");
	scanf("%s",b);
	printf("Enter gender 3:");
	scanf("%s",c);
	printf("Enter gender 4:");
	scanf("%s",d);
	printf("Enter gender 5:");
	scanf("%s",e);
	printf("\n");
	printf("Enter the cgpa of 5 student\n");
	printf("\n");
	printf("Enter cgpa 1:");
	scanf("%d",&f);
	printf("Enter cgpa 2:");
	scanf("%d",&g);
	printf("Enter cgpa 3:");
	scanf("%d",&h);
	printf("Enter cgpa 4:");
	scanf("%d",&i);
	printf("Enter cgpa 5:");
	scanf("%d",&j);
	printf("\n\n");
	printf("here the table of given data\n");
	printf("\n");
	printf("\n");
	printf("===============================================================\n");
	printf("| S.no|   Name  | Gender |    cgpa    |\n");
	printf("|  |      |    |     |\n");
	printf("===============================================\n");
	printf("|  1");
	printf("%s",namea);
	printf("      %s",a);
	printf("      %d\n",f);

	printf("|  2");
	printf("%s",nameb);
	printf("      %s",b);
	printf("      %d\n",g);

	printf("|  3");
	printf("%s",namec);
	printf("      %s",c);
	printf("      %d\n",h);

	printf("|  4");
	printf("%s",named);
	printf("      %s",d);
	printf("      %d\n",i);

	printf("|  5");
	printf("%s",namee);
	printf("      %s",e);
	printf("      %d\n",j);
	printf("=======================================\n");
	getch();


}