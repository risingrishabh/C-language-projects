#include<stdio.h>
int menu();
void deposite();
void withdrawal();
void transfer();
void check_details();

int totalammount=1000,ammount,totalwithd=0,totaltr=0,totaldepo=0,tr,ammo,choice;
int main()
{
while(1)
{
	
switch(choice){

    case 1: 
	    deposite();
        totaldepo+=ammount;
        break;
         case 2: 
	    withdrawal();
        if(totalammount>=ammo)
        totalwithd+=ammo;
        break;
    case3: transfer();
            if(totalammount>=tr)
            totaltr+=tr;
            break;
   	case 4:check_details();
   	        break;
   	 
   	default: 
	   	printf("invalid choice");
   	
  }
  
}

int menu()
{
	int choice;
	printf("\n 1.Deposite Ammount");
	printf("\n 2.Withdrawal Ammount");
	printf("\n 3.Transfer the Ammount");
	printf("\n 4.Check details of Account");
	printf("\n 5.Exit");
	printf("\n Enter your choice:-");
	scanf("%d",&choice);
	return choice;
	
}
void deposite()
{
	printf("\n Enter the ammount you want to deposite");
	scanf("%d",&ammount);
	totalammount= totalammount+ammount;
}
void withdrawal()
{
	printf("\nEnter the withdrawal ammount");
	scanf("%d",& ammo);
	if(totalammount>ammo)
	totalammount=totalammount- ammo;
	else
	printf("\n Ammount can not be negative");
}
void transfer()
{
	printf("\nTransfered ammount");
	scanf("%d",&tr);
	totalammount=totalammount-tr;
}
void check_details()
{
	printf("\nTotal ammount=%d",totalammount);
	printf("\n Total withdrawal=%d",totalwithd);
	printf("\n Total deposite=%d",totaldepo);
	printf("\n Total transfer=%d",totaltr);
}
}






