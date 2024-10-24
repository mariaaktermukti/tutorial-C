#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    
    int experience[N];
    for(int i=1;i<=N;i++){
        scanf("%d", &experience[i]);
    }
    
   for(int i=1;i<=N;i++){
    if(experience[i]<1){
        printf("Entry-level candidate\n");
    }
    else if(experience[i]>=1 && experience[i]<=3){
        printf("Junior candidate\n");
    }
    else if(experience[i]>=4 && experience[i]<=7){
        printf("Mid-level candidate\n");
    }
    else if(experience[i]>7){
        printf("Senior candidate\n");
    }
   }
   return 0;
}
