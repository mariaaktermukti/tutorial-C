#include<stdio.h>
int main(){
  char str[100],ch;
  int i,len=0,count=0;
  puts("Enter a string :");
  gets(str);

for(i=0;str[i]!='\0';i++){
    len++;
}
 printf("Count :");
 scanf("%c",&ch);
 for(i=0;i<len;i++){
    if(str[i]>='A' && str[i]<='Z'){
        str[i]+=32;
    }
    if(str[i]==ch){
        count++;
    }
 }
printf("Digit : %d\n\n",count);
}