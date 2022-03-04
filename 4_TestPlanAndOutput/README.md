# TEST_PLAN
## High Level Requirements Test Plan
| ID    | High Level Requirement | Expected I/P | Expected O/P | Actual O/P | 
| ----- | ---------------------- | ------------ | ------------ | ---------- | 
| HLR1  | User is able to open an account |  First Name: Abc, Last Name: XYZ, Initial Balance: XXXX00   | Account has been created successfully| Account has been created successfully | 
| HLR2  | User is able to deposit money  |  Enter Balance : 1000  | The new balance for account X is 2000 | The new balance for account X is 2000 | 
| HLR3  | User is able to withdraw money | Enter Balance : 1000| The new balance for account X is 1000 | The new balance for account X is 1000 |   
| HLR3  | User is able to withdraw money | Enter Balance : 4000| You do not have enough balance in this account | You do not have enough balance in this account |

## Low Level Requirement Test Plan
| ID    | Low Level Requirement | Expected I/P | Expected O/P | Actual O/P | 
| ----- | ---------------------- | ------------ | ------------ | ---------- |
| LLR1  | User is able to see account details |  Enter Account number: 1|Account Holder’s name: XYZ, Account number: 1 , Available balance: XXXX00 | Account Holder’s name: XYZ, Account number: 1 , Available balance: XXXX00|
| LLR2  | User is able to see balance  |  Enter Choice: 3,  Enter Account number: 1   | Balance: 3000 | Balance: 3000 |