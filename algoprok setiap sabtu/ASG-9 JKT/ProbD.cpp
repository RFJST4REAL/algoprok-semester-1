#include <stdio.h>

int hasil(int a){
    if(a % 2 == 1){
		return 1;
    } 
    if(a == 0){
		return 0;
    }
    else{
		return hasil(a - 1) + hasil(a - 2);
    }
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d\n", hasil(a));
    
    return 0;
}
