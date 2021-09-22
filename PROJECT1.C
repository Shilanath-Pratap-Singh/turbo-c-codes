#include<stdio.h>
#include<conio.h>
int list();
void diposite();
void withdrow();
void transfer();
void checkDetail();
void last();
int TotalAmount=1000,amount,amo,tr,totaldiposite=0,totalwith=0,totaltr=0;
int acc;
char a[50];
void main()
{
       clrscr();
       printf("Enter your name:");
       gets(a);
       printf("Enter your account number:");
       scanf("%d",&acc);

	while(1)
	{
	 clrscr();
	 switch(list())
	 {
	  case 1:
		diposite();
		totaldiposite+=amount;
		break;
	  case 2:
		withdrow();
		if(amo<=TotalAmount)
		totalwith+=amo;
		break;
	  case 3:
		transfer();
		if(tr<=TotalAmount)
		totaltr+=tr;
		break;
	  case 4:
		checkDetail();
		break;
	  case 5:
		clrscr();
		last();
		getch();
		exit(0);
	  default:
	  printf("\nInvalid choice");
	 } //end of switch
	 getch();
	}  //end of while

}
int list()
{
	int ch;
	printf("\n1.Diposite Amount:");
	printf("\n2.Withdrow Amount:");
	printf("\n3.Transfer Amount:");
	printf("\n4.Check Detail::");
	printf("\n5.Exit:");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	return(ch);
}
void diposite()
{
	printf("\nEnter the Amount to you want to diposite:");
	scanf("%d",&amount);
	TotalAmount+=amount;
}

void withdrow()
{
	printf("\nEnter the Amount to you want to withdrow:");
	scanf("%d",&amo);
	if(amo<=TotalAmount)
	TotalAmount-=amo;
	else
	printf("\nLess amount withdrow is not possible:");
}
void transfer()
{
	printf("\nEnter the Amount to you want to transfer:");
	scanf("%d",&tr);
	if(tr<=TotalAmount)
	TotalAmount-=tr;
	else
	printf("Less amount transfer is not possible");
}

void checkDetail()
{
	printf("\nTotal Amount = %d",TotalAmount);
	printf("\nTotal Diposite Amount = %d",totaldiposite);
	printf("\nTotal Withdrow Amount = %d",totalwith);
	printf("\nTotal Transfer Amount = %d\n\n",totaltr);

}


void last()
{
	printf("\n***********************************************\n");
	printf("\nYour Name=%s",a);
	printf("\nAccount number=%d",acc);
	printf("\nTotal Amount = %d",TotalAmount);
	printf("\nTotal Diposite Amount = %d",totaldiposite);
	printf("\nTotal Withdrow Amount = %d",totalwith);
	printf("\nTotal Transfer Amount = %d\n\n",totaltr);
	printf("\n \n Thanks******************************");
}