#include<stdio.h>
int main(){
 char str[100];
 puts("Enter the string : ");
 gets(str);
  for(int i=0;str[i]!='\0';i++){
    if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
  }
  puts(str);

return 0;
}
