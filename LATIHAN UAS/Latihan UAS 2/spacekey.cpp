#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int set=0; set<a; set++){
        char space[100000];
        int b;
        scanf("%d", &b);
        scanf(" %[^\n]", space);
        int count=0;

        char str[100000];
        int idx=0;
        for(int set=0; set<b; set++){
            if(count==2){
                count=0;
            }
            if(count == 0){
                str[idx]= space[set];
                idx++;
            }
            if(space[set]==' '){
                count++;
            }
        }
        printf("Case #%d: %s\n", set+1, str);
        
    }


    return 0;
}