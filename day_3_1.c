#include<Stdio.h>
int main(){

  printf("Before for loop\n :");
  for(int i=0;i<=3;i++){
   printf("Inside for loop\n");
   printf("Value of i = %d\n",i);
  }
  printf("Outside for loop1\n");
  printf("Outside for loop2\n");

  return 0;
}
