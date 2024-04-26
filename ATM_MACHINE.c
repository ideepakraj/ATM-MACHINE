#include <stdio.h>

void balanceCheck(int balance)
{
    printf("Your available balance : %d", balance);
}

int Moneydeposit(int balance)
{
    int deposit ;
    printf("Enter amount want to deposit");
    scanf("%d", &deposit);
    
    balance+=deposit;
    
    printf("Your money is deposited successfully");
    
    return balance;
}

int withdrawMoney(int balance)
{
    int withdraw;
    printf("Enter your amount to withdraw\n");
    scanf("%d",&withdraw);
    
    balance-=withdraw;
    printf("\nplease collect your cash\n\n");
    
    printf("Available balance is %d",balance);
    
    return balance;
}

void exit()
{
    printf("Thank You for using our ATM Services\nHope to serve you again");
}

int main()
{
  int pin,insert;
  int balance = 20000;
  printf("\n\t\t\t\t\t\t\t\t\t\t\t********************");
  printf("\n\t\t\t\t\t\t\t\t\t\t\t* INSERT YOUR CARD *\n");
  printf("\t\t\t\t\t\t\t\t\t\t\t********************");
  printf("\n\nIf inserted press 0 -> ");
  scanf("%d",&insert);
  printf("Type your secret pin number : ");
  
  
  while(1)
  {
   scanf("%d",&pin);
   if(pin==2002)
   {  
    Dash:
    printf("\n\n\t\t\t\t\tHello! Welcome to our ATM service\n");
  
    printf("\n1.Balance Inquiry");
    printf("\t\t\t\t\t\t\t\t\t2.Cash Withdrawal\n");
    printf("\n3.Cash Deposition");
    printf("\t\t\t\t\t\t\t\t\t4.Exit\n");
  
    printf("\n******************");
   }
   else
   {
    printf("\nWrong PIN\n\n");
    exit();
    goto anotherTran;
   }
  
  
  int choice;
  printf("\nPlease proceed with your choice\n");
  scanf("%d",&choice);
  

   switch(choice)
   {
    case 1 :
      {
       balanceCheck(balance);
       break;
       goto anotherTran;
      }
      
    case 2 :  
      {
         withdrawMoney(balance);
         break;
         goto anotherTran;
      }
    
    case 3 :
      {
         Moneydeposit(balance);
         break;
         goto anotherTran;
      }  
    case 4 : 
      {
         exit();
         break;
      }   
    default:
      {
        printf("Please enter valid key");
      }
   }
 }
 
    anotherTran :
    printf("\n\nWould you like to do another transaction:\n");
    printf("1 -> Yes\n");
    printf("2 -> No\n");
    int select;
    scanf("%d", &select);
    if(select==1)
        goto Dash;
    else if(select==2)
        printf("THANK YOU");
        goto exit;
  
  exit:
  return 0; 
}
