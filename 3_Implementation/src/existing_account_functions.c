void account_information()
{
    
     int account_number;
     printf("Please enter the account number   :");
     scanf("%d", &account_number);
     if(account_number <= num_acc)
     {
         printf("\nAccount Holder's name                  : %s %s \n" , all_account[account_number-1].first_name, all_account[account_number-1].last_name);
         printf("Account number                         : %d \n" ,  all_account[account_number-1].acc_number);
         printf("Available balance                      : %f \n\n" ,  all_account[account_number-1].available_balance);
     }
}
 
// Function to deposit amount in an account
 
void cash_Deposit()
{
   int account_number;
   float add_money;
 
   printf("Enter account number you want to deposit money:");
   scanf("%d",&account_number);
   if (account_number <= num_acc) {
        printf("\nThe current balance for account %d is %f \n", 
        account_number, all_account[account_number-1].available_balance);
        printf("\nEnter money you want to deposit :  ");
        scanf("%f",&add_money);

         all_account[account_number-1].available_balance=
         all_account[account_number-1].available_balance + add_money;
         printf("\nThe New balance for account %d is %f \n", 
         account_number, all_account[account_number-1].available_balance);
   }
   else{
        printf("\nThis was not a valid account number\n");
        return;
   }
}
 
// Function to withdraw amount from an account
 
void cash_withdrawl()
{
   int account_number;
   float withdraw_money;
 
   printf("Enter account number you want to withdraw money:");
   scanf("%d",&account_number);
   if (account_number <= num_acc) { 
        printf("\nThe current balance for account %d is %f \n", 
        account_number, all_account[account_number-1].available_balance);
        printf("\nEnter money you want to withdraw from account ");
        scanf("%f",&withdraw_money);
        if(withdraw_money > all_account[account_number-1].available_balance){
             printf("\nYou do not have enough balance in this account\n");
             return;
        }
        all_account[account_number-1].available_balance=
        all_account[account_number-1].available_balance-withdraw_money;
        printf("\nThe New balance for account %d is %f \n", 
        account_number, all_account[account_number-1].available_balance);
   }
   else{
        printf("\nThis was not a valid account number\n");
        return;
   }
}