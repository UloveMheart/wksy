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
    //初始化ch全为.
    for(int i=0 ; i<100 ; i++){
        ch[i/10][i%10]='.';
    }
    //产生随机数
    srand( (unsigned)time( NULL ) );
    //赋值A
    ch[0][0] = letter ;
    int row =0;
    int lis =0;

    for(letter = 66 ; letter < 91 ; letter++){
        random = rand()%4;
    //判断程序能否进行
        if(stop(row,lis,ch) == 1)
            break;
    //判断下一步能否进行
        while(judge(random,row,lis,ch)){
            random = rand()%4;
        }
    //改变数组
        if(random == 0)
            row = row - 1;
        if(random == 1)
            lis = lis - 1;
        if(random == 2)
            row = row + 1;
        if(random == 3)
        lis = lis + 1;
    //赋值字母
        ch[row][lis] = letter;
    }

    //输出
    for(int i=0 ; i < 100 ; i++){
        if(i%10 == 0)
            printf("\n");
        printf(" %c",ch[i/10][i%10]);

    }
    return 0;
}
//判断程序是否无法进行
int stop(int row ,  int lis , char ch[10][10]){
    if(judge(0 , row , lis ,ch ) == 1 && judge(1 , row , lis , ch) == 1 && judge(2 , row , lis , ch) == 1 && judge(3 , row , lis , ch) == 1)
        return 1;
    return 0;
}


//判断下一步是否超出
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



