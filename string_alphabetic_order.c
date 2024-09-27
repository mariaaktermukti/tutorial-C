#include<stdio.h>
#include<string.h>
int main(){
   char str;
   puts("Enter a string :");
   gets(str);
  int len=0,temp=0;
 for(int i=0;str[i]!='\0';i++){
    len++;
 }
 for(int i=0;i<len;i++){
    for(int j=i;j<len;j++){
        if(str[i]>str[j]){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
 }

puts(str);
}