#include <stdio.h>

double counting(long long int mid){
	return (mid * 1.0 * (mid + 1.0) * ((2.0 * mid) + 1.0))/6.0;
}

int main(){
    long long int a, b;
    scanf("%lld", &a);
    
    for(int i=0; i<a; i++){
    	long long int max=1442251, min=1, sum=0, mid;
    	scanf("%lld", &b);
    	
    	while(min <= max){
    		mid = (min + max)/2;
    		if(b > counting(mid)){
    			min=mid;
			}
			else if(b <= counting(mid)){
				if(counting(mid-1) >= b){
					max=mid;
				}else{
					printf("Case #%d: %lld\n", i+1, mid);
					goto end;
				}
			}
		}
		end:;
	}
    return 0;
}
