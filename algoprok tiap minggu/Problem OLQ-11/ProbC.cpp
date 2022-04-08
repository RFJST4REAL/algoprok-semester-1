#include<stdio.h>

int main(){
	int a, b;
	scanf("%d", &a);getchar();
	
	long long int data[a+2], sum[a+2];
	
	for(int set=0; set<a; set++){
		scanf("%lld", &data[set]);getchar();
		if(set==0){
			sum[0]=data[set];	
		}
		if(set>0){
			sum[set]=data[set]+sum[set-1];
		}
	}
	scanf("%d", &b);
	for(int set=0; set<b; set++){
		long long int count;
		scanf("%lld", &count);
		long long int max=a-1, min=0, mid;
		
	
		while(max >= min){
    		long long int mid = min + (max - min) / 2;
    		if(count >= sum[mid] && mid == max){
    			mid++;
    			printf("Case #%d: %lld\n", set+1, mid);
            	goto end;
			}
			if (count >= sum[mid] && count < sum[mid+1]) {
            	mid++;
            	printf("Case #%d: %lld\n", set+1, mid);
            	goto end;
       		}
       		if (count < sum[mid] && count < sum[mid+1]) {
            	max=mid-1;
			}
			else{
        		min=mid+1;
			}
		}
		printf("Case #%d: -1\n", set+1);
		end:;
		
	}
	return 0;
}
