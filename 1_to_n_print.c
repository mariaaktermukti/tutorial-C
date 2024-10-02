#include<Stdio.h>
int main(){
   int n=10;
   int sum=0;
   for(int i=1;i<=n;i++){

    printf("%d + %d = ", sum, i);

    sum=sum+i;

    printf("%d\n", sum);
   }
   printf("Sum is= %d", sum);
    return 0;
}