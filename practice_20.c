#include<stdio.h>
int main(){
     int T;
     scanf("%d", &T);

     for(int i=0;i<T;i++){
        int N;
        scanf("%d", &N);
        if(N==0){
            printf("0");
        }
        while(N!=0){
            int digit= N % 10;
            printf("%d ", digit);
            N=N/10;
        }
        printf("\n");
     }
    return 0;
}
// #include <stdio.h>

// int main() {
//     int T;
//     scanf("%d", &T); 

//     while (T--) {
//         int N;
//         scanf("%d", &N);
//         if (N == 0) {
//             printf("0\n");
//             continue;
//         }

//         while (N > 0) {
//             printf("%d", N % 10);  
//             N /= 10;             
            
//             if (N > 0) {
//                 printf(" "); 
//             }
//         }

//         printf("\n");  
//     }

//     return 0;
// }
