#include<stdio.h>
int main(){
 char str[100];
 int add=0;
 puts("Enter a string :");
 gets(str);

 for(int i=0;str[i]!='\0';i++){
  if((str[i]>='0') && (str[i]<='9')){
    add+=str[i]-'0';
  }
}

printf("Add : %d",add);

}