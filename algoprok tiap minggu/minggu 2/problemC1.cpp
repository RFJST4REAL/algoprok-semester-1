#include<stdio.h>

int input1, input2, bag1, bag2, baris1, baris2;
char op1, op2, op3, lol1, lol2, lol3;

int main(){
	-100000<= input1, input2 <= 100000;
	-100000<= bag1, bag2 <= 100000;
	-100000<= baris1, baris2 <= 100000;
	
	scanf("%d %c %d %c", &input1, &op1, &input2, &lol1);
	scanf("%d %c %d %c", &bag1, &op2, &bag2, &lol1);
	scanf("%d %c %d %c", &baris1, &op3, &baris2, &lol1);
	
	printf("%d\n", input1 + input2);
	printf("%d\n", bag1 + bag2);
	printf("%d\n", baris1 + baris2);
	
	
	
	
	
	
	
	
	return 0;
}
