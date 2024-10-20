/*reverse array*/
//  index- 0 1 2 3 4 5
//  input- 9 8 7 6 5 4
//  output-4 5 6 7 8 9
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ", a[i]);
    }
    return 0;
}