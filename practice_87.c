#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int years= N/365;
    int reminder= N%365;
    int months= reminder / 30;
    int days= reminder % 30;
    
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);
    return 0;

}