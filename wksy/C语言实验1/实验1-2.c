#include<stdio.h>
int main ()
{
    int a,tw,ten,fiv,one,tem,tem2,tem3;
    printf("Enter a dollar amount:");
    scanf("%d",&a);
    printf("\n\n$20 bills:%d\n$10 bills:%d\n$5 bills:%d\n$1 bills:%d\n",
           a/20,
           (a-a/20*20)/10,
           (a-a/20*20-(a-a/20*20)/10*10)/5,
           a-a/20*20-(a-a/20*20)/10*10-(a-a/20*20-(a-a/20*20)/10*10)/5*5);
    return 0;
}
