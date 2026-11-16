#include <stdio.h>
int main()
{
int pin =1234;
int enteredpin;
int choice;
float balance=5000;
float amount;
printf("=====welcome to ATM=====\n");
printf("enter your pin; ");
scanf("%d",&enteredpin);
if (enteredpin !=pin)
{
printf("Inval id pin!=\n");
return 0;
}
printf("\nlogin succesfull!\n");
do
{
printf("\n===== ATM MENU =====\n");
printf("1.check balance\n");
printf("2.deposite money\n");
printf("3.withdraw money\n");
printf("4.exit\n");

printf("enter your choice:");
scanf("%d", &choice);

switch (choice)
{
case 1:
printf("Your Balance: Rs.%2f\n",balance);
break;
case 2;
print("Enter deposite amount:");
scanf("%f",&amount);
if (amount >0)
{
balance=balance+amount;
printf("money Deposited successfully!\n");
printf("New Balance: Rs. %.2f\n", balance);
}
else
{
printf("Invalid Amount!\n");
}
break;
case 3;
printf("Enter withdrawl amount:");
scanf("%f", &amount);
if (amount<=0)
{printf("Invalid Amount!\n");
}
else if (amount<=balance)
{
balance=balance - amount;
printf("please collect Your Cash.\n");
printf("