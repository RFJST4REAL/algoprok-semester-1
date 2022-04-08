#include <stdio.h>

int fibo(int check, int *fibo_c){
    *fibo_c = *fibo_c + 1;
    if (check == 0 || check == 1){
        return 1;
	}
    else{
        return fibo(check - 1, fibo_c) + fibo(check - 2, fibo_c);
	}
}



int main(){
    int a;
    scanf("%d", &a);
    
    for (int set = 0; set < a; set++){
        int fibo_c=0;
        int check=0;
        scanf("%d", &check);
        fibo(check, &fibo_c);
        printf("Case #%d: %d\n", set+1, fibo_c);
    }

    return 0;
}
