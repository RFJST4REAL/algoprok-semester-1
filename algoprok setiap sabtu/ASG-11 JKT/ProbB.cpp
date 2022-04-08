#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	for(int set = 0; set < a; set++){
		long long int b, c;
		scanf("%lld %lld", &b, &c);
		
		long long int isi[b];
		for(int i=0; i<b; i++){
			scanf("%lld", &isi[i]);
		}
		int max = 0;
		for(int i = 0; i < b; i++){
			long long int total = 0;
			int count = 0;
			for(int j = 0; i + j < b; j++){
				if(total + isi[i + j] <= c){
					total += isi[i + j];
					count++;
				}
				else break;	
			}
			if(count > max){
				max = count;
			}
		}
		printf("Case #%d: ", set + 1);
		if(max == 0){
			max -= 1;
		}
		printf("%d\n", max);
	}
	
	return 0;
}
