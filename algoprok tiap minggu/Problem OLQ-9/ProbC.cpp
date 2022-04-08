#include <stdio.h>

int main (){
	int a;
	scanf("%d", &a);getchar();
	
	for (int set=0; set<a; set++){
		long long int b, c;
		scanf("%lld %lld", &b, &c);getchar();
		printf("Case #%d: ", set+1);
		for(int set1=100000; set1>1; set1--){
			if(b==c){
				set1==1;
				printf("YES\n");
				goto akhir;
			}
			if(b==1){
				set1=1;
				if(b==c){
					printf("YES");
				}else printf("NO\n");
				goto akhir;
			}
			if(b%2==0){
				b/=2;
			}else{
				b=b*3+1;
			}	
		}
		akhir:;
		
	}
	
	
	return 0;
}
