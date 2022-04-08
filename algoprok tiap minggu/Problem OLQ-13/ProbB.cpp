#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	for(int i=0; i<a; i++){
		int b;
		scanf("%d", &b);
		long long int arr[b];
		
		for(int set=0; set<b; set++){
			scanf("%lld", &arr[set]);
		}
		long long int min=9999999;
		
		for(int set=0; set<b; set++){
			for(int set1=set+1; set1<b; set1++){
				long long int minus=arr[set]-arr[set1];
				if(minus<0){
					minus*=-1;
				}
				if(minus<min){
					min=minus;
				}
			}
		}
		printf("Case #%d: %lld\n", i+1, min);
		
	}
	
	
	
	return 0;
}
