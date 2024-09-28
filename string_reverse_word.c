/*Write a program in C to reverse the words in a string. ***
Sample Input              Sample Output
“My name is Andy”        “Andy is name My”
“Abc 123 7&*&*”          “7&*&* 123 Abc”*/

#include<stdio.h>
int main(){
 char str[100];
 int len=0;
 puts("Enter the string :");
 gets(str);

  for(int i=0;str[i]!='\0';i++){
         len++;
}
 int end=len-1;
 for(int i=end;i>=0;i--){
    if(str[i]==' ' || i==0){
        for(int j=i;j<=end;j++){
            printf("%c",str[j]);
        }
        end=i-1;
        printf(" ");
    }
 }
 printf(" ");
 return 0;

}