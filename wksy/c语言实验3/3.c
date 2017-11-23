#include<stdio.h>
int size(long n);
int main()
{
    int digit_seen[10] = {0};
    int digit;
    long n;
    int sizer;
    printf("Enter a number: ");
    scanf ("%ld", &n);
    sizer=size(n);
    for(int i=0 ; i < sizer ; i++){
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }
    printf("Digit:       0  1  2  3  4  5  6  7  8  9\nOccurrences");
    for(int i=0 ; i < 10 ; i++){
        printf("  %d",digit_seen[i]);
    }
    return 0;
}
int size(long n){
    int sizer=0;
    while (n != 0){
        sizer++;
        n /= 10;
    }
    return sizer;
}
