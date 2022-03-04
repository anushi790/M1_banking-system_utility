# TEST_PLAN
## High Level Requirements Test Plan
| ID    | High Level Requirement | Expected I/P | Expected O/P | Actual O/P | 
| ----- | ---------------------- | ------------ | ------------ | ---------- | 
| HLR1  | User is able to open an account |  First Name: Abc, Last Name: XYZ, Initial Balance: XXXX00   | Congratulations Account is Created First Name: Abc, Last Name: XYZ, Account numeber: 1 Initial Balance: XXXX00| Congratulations Account is Created First Name: Abc, Last Name: XYZ, Account number: 1 Initial Balance: XXXX00 | 
| HLR2  | User is able to deposit money  |  Enter Balance : 1000  | Amount is Deposited Balance: 3000 | Amount is Deposited Balance: 3000 | 
| HLR3  | User is able to withdraw money | Enter Balance : 1000| Amount Withdrawn Balance: 2000 | Amount Withdrawn Balance: 2000 |   
| HLR3  | User is able to withdraw money | Enter Balance : 4000| Insufficient Balance | Insufficient Balance |

## Low Level Requirement Test Plan
| ID    | Low Level Requirement | Expected I/P | Expected O/P | Actual O/P | 
| ----- | ---------------------- | ------------ | ------------ | ---------- |
| LLR1  | User is able to see account details |  Enter Account number: 1| First Name: Abc, Last Name: XYZ, Account numeber: 1 Initial Balance: XXXX00 | First Name: Abc, Last Name: XYZ, Account numeber: 1 Initial Balance: XXXX00 |
| LLR2  | User is able to see balance  |  Enter Choice: 2,  Enter Account number: 1   | Balance: 3000 | Balance: 3000 |