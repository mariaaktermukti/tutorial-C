#include<stdio.h>
int main(){
 char str[100];
 puts("Enter the string : ");
 gets(str);
 int count_space=0;
 for(int i=0;str[i]!='\0';i++){
    if(str[i]==' ')
        count_space++;
 }
 printf("Total space are :%d ",count_space);


return 0;
}
