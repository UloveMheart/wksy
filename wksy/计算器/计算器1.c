#include<stdio.h>
int main()
{
        printf("   ****************************************************\n");
    printf("   *                                                  *\n");
    printf("   *                  C���Լ�����                     *\n");
    printf("   *                  �����ˣ�                        *\n");
    printf("   *                          ����־                  *\n");
    printf("   *                                                  *\n");
    printf("   *    ʹ��ע�⣺                                    *\n");
    printf("   *             + = �Ӻ�                             *\n");
    printf("   *             - = ����                             *\n");
    printf("   *             * = �˺�                             *\n");
    printf("   *             / = ����                             *\n");
    printf("   *                                                  *\n");
    printf("   *                                                  *\n");
    printf("   *                                                  *\n");
    printf("   *                                                  *\n");
    printf("   *                                                  *\n");
    printf("   ****************************************************\n");

    char input[20];
    char ch;
    printf("��������Ҫ���������ʽ��");
    scanf("%s",&input);
    sscanf(input,"%d",&ch);
    printf("%d",ch);
}
