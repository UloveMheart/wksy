#include<stdio.h>
int main()
{
    float loan,rate,payment,mon1,mon2,mon3;
    printf("Enter amount of loan:");
    scanf("%f",&loan);
    printf("Enter interest rate:");
    scanf("%f",&rate);
    printf("Enter monthly payment:");
    scanf("%f",&payment);
    rate=rate/1200;
    mon1=(loan-payment)+loan*rate;
    mon2=(mon1-payment)+mon1*rate;
    mon3=(mon2-payment)+mon2*rate;
    printf("\nBlanance remaining after first payment:$%.2f\nBlanance remaining after secound payment:$%.2f\nBlanance remaining after third payment:$%.2f\n",mon1,mon2,mon3);
    return 0;
}
