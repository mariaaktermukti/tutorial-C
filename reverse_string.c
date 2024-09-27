#include<stdio.h>
int main(){
   char str[1000];
   puts("Enter a string :");
   gets(str);
 int len=0;
   for(int i=0;str[i]!='\0';i++){
         len++;
}
 int temp=0;
 for(int i=0;i<len/2;i++){
    temp=str[i];
    str[i]=str[len-1-i];
    str[len-1-i]=temp;
 }
puts(str);

}