#include<stdio.h>
#include<string.h>

int main(){

int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        char string[1200];
        scanf("%s", &string);
        
		int length = strlen(string);
        printf("Case %d: ", i + 1);
		
		for (int j = 0; j < length; j++) {
			if (j>0){
				printf("-");
			}
            printf("%d", string[j]);
        }
        printf("\n");
    }
    
    
 return 0;   
}
