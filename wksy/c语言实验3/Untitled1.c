#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand( (unsigned)time( NULL ) );
    printf("%d",range()%4);
}
