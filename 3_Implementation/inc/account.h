struct account
{
     char first_name[20];
     char last_name[20];
     int acc_number;
     float available_balance;     
};
struct account all_account[100];
int num_acc = 0;
 
void create_new_account();
void cash_Deposit();
void cash_withdrawl();
void account_information();
void log_out();
void display_options();