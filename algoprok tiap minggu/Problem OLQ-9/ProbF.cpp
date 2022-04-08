#include <stdio.h>

int number[100];

void sum(int x, int y){
    if(2 * y <= x){
        number[2 * y] += number[y];
        sum(x, y * 2);
    }
    if(2 * y < x){
        number[2 * y + 1] += number[y];
        sum(x, y * 2 + 1);
    }
    if(2 * y > x && 2 * y + 1 > x){
        printf("%d\n", number[y]);
    }
}

int main(){
    int a;
    scanf("%d", &a);
    
    for(int set = 0; set < a; set++){
        int n;
        scanf("%d", &n);
        
		for(int set1 = 1; set1 <= n; set1++){
            scanf("%d", &number[set1]);
        }
        
		printf("Case #%d:\n", set + 1);
        sum(n, 1);
    }
    
    return 0;
}
