/* ---- Customized Loan Amortization Table Calculator ---- */
    /* Statement of input(s) */
    /* Statement of output(s) */

/* Problem Statement: */
/* Author: Ian Langelett */
/* Created Date: 03/13/2024 */
/* Revised by: Ian Langelett*/
/* Revision Date: 03/21/2024 */

/* ---- Preprocessor Directives ---- */

/* ---- Required libraries ---- */
#include <stdio.h>
#include <math.h>
/*------------------------------*/

/* ---- Main Function ---- */
int
main()
{
/*----Local Variables----*/
double principal;
double annual_interest_rate;
int number_of_payments;
float payment;
int counter;
float interest;
double principal_balance;
double monthly_principal;
double total_interest;
double accumlated_interest;
double final_payment;
/*------------------------*/

/* ---- Executable Statements ---- */

/*Retrieve the required loan information*/
printf("Amortization Schedule Calculator\n\n");
printf("Enter the Following Loan Information\n");
printf("Loan Amount: $");
scanf("%lf", &principal);
printf("Annual Interest Rate: %%");
scanf("%lf", &annual_interest_rate);
printf("Number of Payments: #");
scanf("%d", &number_of_payments);
/*-------------------------------------*/

/* Equation used to calculate the table's information */
payment = roundf(((annual_interest_rate/100/12)*principal)/(1-pow((1+annual_interest_rate/100/12),-number_of_payments))*100)/100;
/*---------------------------------------------------*/


/*------------------ Generate Table Values -------------------*/
printf("\nPrincipal         $%.2f\n", principal);
printf("Annual interest    %.1f%%\n", annual_interest_rate);
printf("Payment            $%.2f\n", payment);
printf("Term               %d months\n\n", number_of_payments);
printf("Payment     Interest     Principal     Principal Balance\n");
printf("--------------------------------------------------------\n");
/*----------------------------------------------------------*/

/*---------------------- Generate Table --------------------*/
counter = 0;
principal_balance = principal;


while (counter < number_of_payments-1)
{
    counter++;
    printf("%d          ", counter);
interest = ((annual_interest_rate/100/12)*principal_balance);
    printf("       %.2f", interest);
monthly_principal = payment - interest;
    printf("         %.2f", monthly_principal);
principal_balance = principal_balance - monthly_principal;
    printf("             %.2f\n", principal_balance);
/*----------------------------------------------------------*/
}

/* Final Payment Calculation */

counter++;
    printf("%d      ",counter);
interest = ((annual_interest_rate/100/12)*principal_balance);
    printf("       %.2f",interest);
    printf("         %.2f",principal_balance);
final_payment = interest + principal_balance;
    printf("              %.2f\n",final_payment - interest - principal_balance);
    printf("--------------------------------------------------------\n");
    printf("Final Payment   $%.2f\n",final_payment);
/*----------------------------------------------------------------*/
return(0);
}






/*
Additional Note:

Thank you Dr. Weist for helping us in class as I was genuinely
struggling understanding the assignment's instructions.
*/
