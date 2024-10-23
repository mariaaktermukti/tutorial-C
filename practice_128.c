/*String Concat without library function*/
#include<stdio.h>
#include<string.h>
int main(){
    char str1[1000]="Maria";
    char str2[1000]="Mostafiz";
    printf("%s %s\n", str1, str2);
    int len_1= strlen(str1);
    int len_2= strlen(str2);
    int final_length= len_1+len_2;
   for(int i=0; i<final_length;i++){
       str1[i]=str2[i];
   }
    printf("%s %s", str1, str2);
    return 0;
}
