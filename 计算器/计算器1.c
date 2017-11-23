#include<stdio.h>
int main()
{
        printf("   ****************************************************\n");
    printf("   *                                                  *\n");
    printf("   *                  C语言计算器                     *\n");
    printf("   *                  制作人：                        *\n");
    printf("   *                          邓翔志                  *\n");
    printf("   *                                                  *\n");
    printf("   *    使用注意：                                    *\n");
    printf("   *             + = 加号                             *\n");
    printf("   *             - = 减号                             *\n");
    printf("   *             * = 乘号                             *\n");
    printf("   *             / = 除号                             *\n");
    printf("   *                                                  *\n");
    printf("   *                                                  *\n");
    printf("   *                                                  *\n");
    printf("   *                                                  *\n");
    printf("   *                                                  *\n");
    printf("   ****************************************************\n");

    char input[20];
    char ch;
    printf("请输入想要计算的运算式：");
    scanf("%s",&input);
    sscanf(input,"%d",&ch);
    printf("%d",ch);
}
