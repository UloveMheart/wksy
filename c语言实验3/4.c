#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int judge(int random , int row , int lis , char ch[10][10]);
int stop(int row ,  int lis , char ch[10][10]);
int main()
{

    char ch[10][10];
    int random;
    int letter = 65;
    //��ʼ��chȫΪ.
    for(int i=0 ; i<100 ; i++){
        ch[i/10][i%10]='.';
    }
    //���������
    srand( (unsigned)time( NULL ) );
    //��ֵA
    ch[0][0] = letter ;
    int row =0;
    int lis =0;

    for(letter = 66 ; letter < 91 ; letter++){
        random = rand()%4;
    //�жϳ����ܷ����
        if(stop(row,lis,ch) == 1)
            break;
    //�ж���һ���ܷ����
        while(judge(random,row,lis,ch)){
            random = rand()%4;
        }
    //�ı�����
        if(random == 0)
            row = row - 1;
        if(random == 1)
            lis = lis - 1;
        if(random == 2)
            row = row + 1;
        if(random == 3)
        lis = lis + 1;
    //��ֵ��ĸ
        ch[row][lis] = letter;
    }

    //���
    for(int i=0 ; i < 100 ; i++){
        if(i%10 == 0)
            printf("\n");
        printf(" %c",ch[i/10][i%10]);

    }
    return 0;
}
//�жϳ����Ƿ��޷�����
int stop(int row ,  int lis , char ch[10][10]){
    if(judge(0 , row , lis ,ch ) == 1 && judge(1 , row , lis , ch) == 1 && judge(2 , row , lis , ch) == 1 && judge(3 , row , lis , ch) == 1)
        return 1;
    return 0;
}


//�ж���һ���Ƿ񳬳�
int judge(int random , int row , int lis , char ch[10][10]){
    if(random == 0){
        row = row - 1;
        if(row < 0 || ch[row][lis] != '.'){
            return 1;
        }
    }

    if(random == 1){
        lis = lis - 1;
        if(lis < 0 || ch[row][lis] != '.'){
            return 1;
        }
    }

    if(random == 2){
        row = row + 1;
        if(row > 9 || ch[row][lis] != '.'){
            return 1;
        }
    }

    if(random == 3){
        lis = lis + 1;
        if(lis > 9 || ch[row][lis] != '.'){
            return 1;
        }
    }
    return 0;
}



