#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d", &A[i]);
    }
      int is_palindrome=1;
    for (int i = 0; i < N / 2; i++) {
        if (A[i] != A[N - i - 1]) {  
            is_palindrome = 0;       
            break;                
        }
    }
    if (is_palindrome) 
    {
        printf("YES\n");  
    } 
    else {
        printf("NO\n");   
}
 return 0;
}