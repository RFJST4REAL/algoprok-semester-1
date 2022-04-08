#include <stdio.h>

int till1(int a){
    if(a == 1){
        return 1;
    }
    if(a % 2 == 0){
        return till1(a / 2);
    }
    if(a % 2 == 1){
        return till1(a - 1) + till1(a + 1);
    }
}

int main(){
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++){
        int input;
        scanf("%d", &input);
        
		printf("Case #%d: ", i + 1);
        printf("%d\n", till1(input));
    }

	return 0;
}
