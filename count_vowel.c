
#include<stdio.h>
int main(){
 char str[100];
 puts("Enter a string ");
 gets(str);

 int v=0;
 for(int i=0;str[i]!='\0';i++){
   if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
       str[i]=='o' || str[i]=='u' || str[i]=='A' ||
        str[i]=='E' || str[i]=='I' ||
         str[i]=='O' || str[i]=='U')
            v++;
}

printf("Count = %d",v);

return 0;

}