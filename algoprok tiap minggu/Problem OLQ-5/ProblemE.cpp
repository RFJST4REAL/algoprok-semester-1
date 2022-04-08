#include<stdio.h>

int main(){
	
	int a;
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		int b, num[200001] = {};
		scanf("%d", &b);
		
		for(int j = 0; j < b; j++){
			int c;
			scanf("%d", &c);
			num[c] = num[c] + 1;
		}
		
		int max = 0, h[1000] = {}, f = 0, t = 0;
		for(int k = 1; k < 200001; k++){
			if (num[k] > max){
				max = num[k];
				t = 1;
			}
			if(t == 1){
				h[1000];
				f = 0;
			}
			t = 0;
			if(num[k] == max){
				h[f] = k;
				f = f + 1;
			}
		}
		
		printf("Case #%d: %d\n", i + 1, max);
		for(int l = 0; l < f; l++){
			if(f == 1){
				printf("%d\n", h[l]);
				break;
			}
			if(l + 1 == f){
				printf("%d\n", h[l]);
				break;
			} 
			else{
				printf("%d ", h[l]);
			}
		}
	}
    
    

	
	
	

	return 0;
}
