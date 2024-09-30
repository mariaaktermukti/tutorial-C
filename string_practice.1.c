#include<stdio.h>
int main(){
 char str1[100],str2[100];
 puts("Enter the 1st string : ");
 gets(str1);
 puts("Enter the 2nd string : ");
 gets(str2);

 int len=0;
 for(int i=0;str1[i]!='\0';i++){
    len++;
 }
 for(int i=0;str2[i]!='\0';i++){
    str1[len+ i]= str2[i];
 }
puts(str1);

return 0;
}
