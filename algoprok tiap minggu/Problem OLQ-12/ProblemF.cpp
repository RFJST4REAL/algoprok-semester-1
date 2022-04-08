#include<stdio.h>


int main(){
 	int a;
 	scanf("%d", &a);
 	
	int b;
	for(int i=0; i<a; i++){
 		scanf("%d", &b);
 		long long int arr[b];
 		
 		for(int set=0; set<b; set++){
 			scanf("%lld", &arr[set]);
		}
		for(int set=0; set<b; set++){
			for(int set1=set+1; set1<b; set1++){
				if (arr[set]>arr[set1]){
					int temp = arr[set];
					arr[set] = arr[set1];
					arr[set1] = temp;
				}
			}
		}
		
		long long int diff;
		int mid=b/2;
		int max=0;
		for(int set=0; set<mid-1; set++){
			diff=arr[set]-arr[set+1];
			if(diff<0){
				diff*=-1;
			}
			if(diff > max){
				max = diff;
			}
		}
		
		for(int set=b/2; set<b-1; set++){
			diff=arr[set]-arr[set+1];
			if(diff<0){
				diff*=-1;
			}
			if(diff > max){
				max = diff;
			}
		}
		printf("Case #%d: %lld\n", i+1, max);
		
	}
   
   
 	return 0;   
}
