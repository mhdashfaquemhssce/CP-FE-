#include<stdio.h>
int main()
{
int enteredPin,pin= 1234;
int choice;
float amount;
float balance = 10000;
printf("Aim: WAP in C for simple menu driven ATM \n\n\n");
printf("Full Name\t: Mohammad Faraz\n");
printf("Roll no.\t: 251749\n");
printf("Division\t: A\n");
printf("Batch\t\t: A3\n");
printf("Branch\t\t: AIML\n");
printf("Subject\t\t: C Programming\n\n\n");

printf("\t***WELCOME TO THE ATM***\n\n");
printf("You are under CCTV surveillance\n\n");
printf("Enter Your PIN :\a");
scanf("%d",&enteredPin);

if(enteredPin != pin)
  {
   printf("Access denied!\tIncorrect Pin\a");
   return 0;
  }
  else 
  {
  printf("\n\n\t\t**ATM MENU**\t\t\t\n\n\n");
  printf(" 1.Check Your Balance\n\a");
  printf(" 2.Amount Deposit\n\a");
  printf(" 3.Withdraw Money\n\a");
  printf(" 4.Exit\n\a");
  printf("Enter Your Choice :\a");
  scanf("%d",&choice);
  
  
  switch(choice){
   case 1:
   printf("Your current balance is ₹:%f",balance);
   break;
   case 2:
   printf("Enter amount:₹\a");
   scanf("%f",&amount);
   balance += amount;
   printf("Money deposit successfully\n");
   printf("Your Updated balance ₹%f\n",balance);
   printf("Thank you for using our ATM\n");
   break;
   case 3:
   printf("Enter Amount:₹\a");
   scanf("%f", &amount);
   if(amount > balance)
   {
    printf("Insufficient amount");
   }
   else
   {
   balance -= amount;
   
   printf("Please collect your balance\n");
   printf("your updated balance %f", balance);
   printf("Thank you for using our ATM");
   }
   
   break;
   case 4:
   printf("THANK YOU FOR USING OUR ATM");
   break;
   default:
    printf("Invalid operators");
   
  }
  }
  

  return 0;
}
