#include <stdio.h>

void fibonaci(char pertama, char kedua, int b){
	if(b == 0){
		printf("%c", pertama);
		return;
	}
	if(b < 2){
		printf("%c", kedua);
		return;
	}
	fibonaci(pertama, kedua, b - 1);
	fibonaci(pertama, kedua, b - 2);
}

int main(){
	int a;
	scanf("%d", &a);
	
	for(int set = 0; set < a; set++){
		int b;
		char pertama, kedua;
		scanf("%d %c %c", &b, &pertama, &kedua); getchar();
		printf("Case #%d: ", set+1);
		fibonaci(pertama, kedua, b);
		printf("\n");	
	}
	
	return 0;
}
