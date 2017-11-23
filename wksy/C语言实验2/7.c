#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=1;
    printf("Enter a number:");
    scanf("%d",&n);
    n=sqrt(n);
    while(a<=n)
    {
        while(a%2!=0)
        {
            a=a+1;
        }
        printf("%d\n",a*a);
        a=a+1;
    }

    return 0;
}