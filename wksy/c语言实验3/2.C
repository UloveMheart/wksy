#include<stdio.h>
int main()
{
	float a,b;
	char op;
	printf("Enter an expression:");
	scanf("%f",&a);
	while((op=getchar())!='\n')
	{
		if(op==' ')
			continue;
		scanf("%f",&b);
		switch(op)
		{
			case '+' :
				a+=b;
				break;
			case '-' :
				a-=b;
				break;
			case '*' :
				a*=b;
				break;
			case '/' :
				a/=b;
				break;
		}
	}
	printf("Value=%g",a);
	return 0;
}
