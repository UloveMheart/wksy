#include<stdio.h>
int main()
{
	int num1,num2,a;
	printf("Enter two integers:");
	scanf("%d %d",&num1,&num2);
	while(num2!=0)
	{
		a=num2;
		num2=num1%num2;
		num1=a;
	}
	printf("Greast common divisor:%d",num1);
	return 0;
}