#include <stdio.h>

int main(){
	
int set = 0;
    scanf(" %d", &set);
    for (int set1 = 0; set1 < set; set1++){
        int n[1001];
        int array = 0;
        scanf(" %d", &array);

        for (int set2 = 0; set2 < array; set2++){
            scanf(" %d", &n[set2]);
        }

        printf("Case #%d: ", set1 + 1);
        for (int set2 = 0; set2 < array; set2++){
            printf("%d", n[array - set2- 1]);
            if (set2 < array - 1){
            	printf(" ");
			}
        }
        printf("\n");
}
	return 0;
}
