#include<stdio.h>
void tel()
{
	char ch;
	printf("Enter phone number:");
	while(1){
		ch=getchar();
		if(ch<=57&&ch>=48)
			printf("%c",ch);
	 	else if(ch==45)
			printf("-");
		else if(ch<=67&&ch>=65)
			printf("2");
		else if(ch<=70&&ch>=68)
			printf("3");
		else if(ch<=73&&ch>=71)
			printf("4");
		else if(ch<=76&&ch>=74)
			printf("5");
		else if(ch<=79&&ch>=77)
			printf("6");
		else if(ch<=83&&ch>=80)
			printf("7");
		else if(ch<=86&&ch>=84)
			printf("8");
		else if(ch<=90&&ch>=87)
			printf("9");
		else if(ch=='\n')
			break;
	}
}
int main()
{
	tel();
	return 0;
}
