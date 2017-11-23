#include<stdio.h>
void change(int a,int b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}

int main()
{
	int a=5,b=3;
	change(a,b);
	printf("a=%d,b=%d",a,b);
	return 0;
}
