#include<stdio.h>
int main()
{
    float a;
    printf("Enter an amount:");
    scanf("%f",&a);
    a=1.05*a;
    printf("With tax add:$%.2f\n",a);
    return 0;
}
