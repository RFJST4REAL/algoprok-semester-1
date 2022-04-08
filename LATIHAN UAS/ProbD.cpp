#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=0; i<a; i++){

        int b;
        scanf("%d", &b);
        
        printf("Case #%d:\n", i+1);
        int sheet;
        if(b % 4 == 0){
            sheet= (b/4);
        }else{
            sheet= (b/4)+1;
        }

        int first[sheet*2];
        int idx=0;
        for(int set=0; set<sheet*2; set++){
            if(set < b){
                first[set]= set+1;
                idx++;
            }else{
                first[set] = 0;
                idx++;
            }
            
        }

        int second[sheet*2];
        int count=0;
        for(int set=sheet*4; set>idx; set--){
            if(set <= b){
                second[count] = set;
                count++;
            }else{
                second[count] = 0;
                count++;
            }
        }
    
        // for(int set=0; set<sheet*; set++){
        //     printf("%d\n", second[set]);
        // }
        int lol=0;
        for(int set=0; set<sheet; set++){
            if(first[lol] != 0 && second[lol] != 0 && first[lol+1] != 0 && second[lol+1] != 0){
                printf("Sheet %d, front: %d, %d\n", set+1, second[lol], first[lol]);
                printf("Sheet %d, back: %d, %d\n", set+1, first[lol+1], second[lol+1]);
                lol+=2;
            }
            else if(first[lol] != 0 && second[lol] == 0 && first[lol+1] != 0 && second[lol+1] == 0){
                printf("Sheet %d, front: Blank, %d\n", set+1, first[lol]);
                printf("Sheet %d, back: %d, Blank\n", set+1, first[lol+1]);
                lol+=2;
            }
            else if(second[lol] != 0 && first[lol] == 0 && second[lol+1] != 0 && first[lol+1] == 0){
                printf("Sheet %d, front: %d, Blank\n", set+1, second[lol]);
                printf("Sheet %d, back: Blank, %d\n", set+1, second[lol+1]);
                lol+=2;
            }
            else if(second[lol] != 0 && first[lol] != 0 && second[lol+1] != 0 && first[lol+1] == 0){
                printf("Sheet %d, front: %d, %d\n", set+1, second[lol], first[lol]);
                printf("Sheet %d, back: Blank, %d\n", set+1, second[lol+1]);
                lol+=2;
            }
            else if(second[lol] == 0 && first[lol] != 0 && second[lol+1] == 0 && first[lol+1] == 0){
                printf("Sheet %d, front: Blank, %d\n", set+1, first[lol]);
                printf("Sheet %d, back: Blank, Blank\n", set+1);
                lol+=2;
            }
            else if(second[lol] == 0 && first[lol] == 0 && second[lol+1] == 0 && first[lol+1] == 0){
                printf("Sheet %d, front: Blank, Blank\n", set+1);
                printf("Sheet %d, back: Blank, Blank\n", set+1);
                lol+=2;
            }
        }
    


    }
    return 0;
}