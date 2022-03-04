int create_new_account_arguments(char* first_name, char* last_name, float initial_deposit){
   strcpy(all_account[num_acc].first_name, first_name);
   strcpy(all_account[num_acc].last_name, last_name);
   all_account[num_acc].acc_number = num_acc + 1;
   all_account[num_acc].available_balance = initial_deposit;
   return all_account[num_acc].acc_number;
}

void create_new_account()
{
   char first_name[20];
   char last_name[20];
   float initial_deposit;
   fflush(stdin);     
   printf("\nEnter first name                 : ");
   scanf("%s", &first_name);
   printf("\nEnter last name                  : ");
   scanf("%s", &last_name);
   printf("\nEnter the initail balace         : ");
   scanf("%f", &initial_deposit);
 
   int created_account_number = create_new_account_arguments(first_name, last_name, initial_deposit);
   printf("%d", created_account_number);
   // strcpy(all_account[num_acc].first_name, first_name);
   // strcpy(all_account[num_acc].last_name, last_name);
   // all_account[num_acc].acc_number = num_acc + 1;
   // all_account[num_acc].available_balance = initial_deposit;
 
   printf("\nAccount has been created successfully \n\n");
   printf("Account Holder's name              : %s %s \n" , all_account[num_acc].first_name, all_account[num_acc].last_name);
   printf("Account number                     : %d \n" , all_account[num_acc].acc_number);
   printf("Available balance                  : %f \n" , all_account[num_acc].available_balance);
 
   num_acc++;
}
