#include <stdio.h>


int main(){
	int a;
	scanf("%d", &a);
	
	int b = 0;
	int point = 1;
	
	int arr[a];
	for(int set = 0; set < a; set++){
		
		b = b + point;
		
		arr[set] = b;
		
		point = point * 2;
	}
	point = 1;
	for(int set = 0; set < a; set++){
		int count = 0;
		for(int set1 = 0; set1 < arr[a - 1]; set1++){
			if(count != arr[a - set - 1]){
				if((set1 + 1) % point == 0){
					count++;
					printf("*");
				}
				else if((set1 + 1) % point != 0 || set1 < a - point - 1){
					printf(" ");
				}
			}
		}
		printf("\n");
		point = point * 2;
	}
	
	return 0;
}
