#include<stdio.h>
#include<string.h>

int main(){
    int tc;
    char text [255];
    scanf("%d",&tc);
    for(int i=0;i<tc;i++){
        scanf("%s",&text);
        int len=0;
        len+=strlen(text);
        if(len>11){
            printf("%c%d%c\n",text[0],len-2,text[len-1]);
        }else{
            printf("%s\n",text);
        }
    }
    return 0;
}
