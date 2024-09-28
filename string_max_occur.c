/* Write a program in C to find the maximum occurring character in a string.
Sample Input               Sample Output
“Welcome to CSE”           E (or e)
“mmmttssarrrddd”           D (or d)
“mmmttssarrrDDd”            D (or d)
 */

#include<stdio.h>
int main(){
  char str[400],res=0;
  int i,len=0,max=0;
  int mc[256]={0};
  puts("Enter a string :");
 fgets(str, sizeof(str), stdin); 

  for(i=0;str[i]!='\0';i++){
    len++;
  }

for(i=0;i<len;i++){
    mc[str[i]]++;
}
for(i=0;i<len;i++){
    if(max<=mc[str[i]]){
        max=mc[str[i]];
        res=str[i];
    }
   
}
 printf("Most frequent character: %c (occurs %d times)\n", res, max);
    return 0;
}
