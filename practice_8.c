#include<stdio.h>
int main(){
   char ch;
   scanf("%c", &ch);

   if(ch>='0' && ch<='9'){
    printf("Digit\n");
   }
   else{
    printf("Alphabet\n");
      if(ch>='A' && ch<='Z'){
         printf("Capital\n");
      }
      else{
        printf("Small\n");
      }
   }

    return 0;
}