#include <stdio.h>
int main(){
    int no;
    float Check_Balance=1000.0;
    float Deposit;
    float Withdraw;

    while(1){
    printf("<----- ATM Simulation (Banking system)----->\n\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n\n");

    printf("enter the number: ");
    scanf("%d",&no);

    switch(no){
       case(1): printf("Your Account Balance is %.2f\n\n",Check_Balance);break;
       case(2): printf("Enter Your Deposit amount = ");
                scanf("%f",&Deposit);
                if(Deposit>0){
                Check_Balance+=Deposit;
                printf("\nDeposit Successful..!\n");
                printf("Your Account Balance is = %.2f\n\n",Check_Balance);
                }else{
                    printf("Invalid deposit amount...!\n");
                }
                break;
       case(3): printf("Enter Your Withdraw payment:");
                scanf("%f",&Withdraw);
                if(Withdraw>0 && Check_Balance>=Withdraw){
                   Check_Balance-= Withdraw;
                   printf("\nWithdrawal Successful!\n");
                   printf("After Withdraw Balance is = %.2f \n\n",Check_Balance);
                } else{
                    printf("Insufficient Balance..... TRY AGAIN..... \n\n");}
                break;
       case(4): printf("Exit...\n ");
                return 0;
       default: printf("You entered invalid option..! Please enter 1-4.\n");                
                return 0;
       }

    }
}