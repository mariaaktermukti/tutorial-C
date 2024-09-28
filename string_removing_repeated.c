/* . Write a program in C to remove all repeated characters in a string.
Sample Input                      Sample Output
“i like programming in C”         “i lkeprogamnC”
“My name is Andy”                 “My nameisAd” 

*/

#include<stdio.h>
int main(){
  char str[100];
  int i,j,k,len=0;
  puts("Enter a string :");
  gets(str);

  for(i=0;str[i]!='\0';i++){
    len++;
  }
 for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(str[i]==str[j]){
            for(k=j;k<len;k++){
                str[k]=str[k+1];
            }
            len--;
            j--;
        }
    }
 }
puts(str);
return 0;
}