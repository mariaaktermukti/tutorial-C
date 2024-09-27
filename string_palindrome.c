#include<Stdio.h>
int main(){
  char str[100];
  int i,len=0;
  printf("\nEnter a string :");
  gets(str);
    for(int i=0;str[i]!='\0';i++){
         len++;
}
for(i=0;i<len;i++){
    if(str[i]!=str[len-1-i]){
        puts("Not Palindrome");
        break;
    }
    else{
        puts("Palindrome");
        break;
    }
}

}