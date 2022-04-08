#include <stdio.h>

int count(int counting){
    if(counting == 1){
        return 1;
    }
    else if(counting % 2 == 0){
        return count(counting / 2);
    }
    else if(counting % 2 == 1){
        return count(counting - 1) + count(counting + 1);
    }
}

int main(){
    int a;
    scanf("%d", &a);

    for (int set = 0; set < a; set++){
        int b;
        scanf("%d", &b);
        
		printf("Case #%d: %d\n", set + 1, count(b));
    }

	return 0;
}
