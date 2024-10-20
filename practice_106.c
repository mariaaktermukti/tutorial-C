/*reverse in another way*/
#include<stdio.h>
int a[1000];
int b[1000];
int main(){
   int length;
   scanf("%d", &length);

 for(int i=0;i<length;i++){
    scanf("%d", &a[i]);
 }

 for(int i=0, j=length-1; i<length; i++,j--){
    b[j]=a[i];
 }
for(int i=0;i<length;i++){
    printf("%d ", a[i]);
}
printf("\n");
for(int i=0;i<length;i++){
    printf("%d ", b[i]);
}   
    return 0;
}