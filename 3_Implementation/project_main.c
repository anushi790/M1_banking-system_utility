#include "./inc/headers.h"
#include "./inc/account.h"
#include "./src/display_options.c"
#include "./src/new_account.c"
#include "./src/existing_account_functions.c"
#include "unity/unity.h"
#include "./tests/new_account_test.c"
/* main program */

void setUp(){}
void tearDown(){}

int main()
{
    char option;
    while(1)
    {
       printf("\n***** Welcome to Bank Application *****\n");
       display_options();
       printf("Please enter any options (1/2/3/4/5/6) ");
       printf("to continue : ");
        option = getch();
        printf("%c \n", option);
        switch(option)
        {
          case '1': create_new_account();
                    break;
          case '2': cash_Deposit();
                    break;
          case '3': cash_withdrawl();
                    break;
          case '4': account_information();
                    break;
          case '5': return 0;
          case '6': system("cls");
                    break;
          default : system("cls");
                    printf("Please enter one of the valid options");
                    printf("(1/2/3/4/5/6) to continue \n ");
                    break;
        }
    }
    return UNITY_END();
}