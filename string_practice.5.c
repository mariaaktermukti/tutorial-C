#include<stdio.h>
int main(){
    char str[1000];
 puts("Enter the string : ");
 gets(str);
int len=0;
  for(int i=0;str[i]!='\0';i++){
        len++;
}
for(int i=0;str[i]!='\0';i++){
    if(str[i]!=str[len-1-i]){
        printf("Not palindrome.\n");
        break;
    }
    else{
        printf("Palindrome.");
        break;
    }
}


}
