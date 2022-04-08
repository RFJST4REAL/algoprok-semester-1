#include <stdio.h>
#include <stdlib.h>


int main(){
	long long int a;
	scanf("%lld", &a);
	
	long long int count[a];
	for(int set=0; set<a; set++){
		scanf("%lld", &count[set]);
	}
	
	for(int set = 0; set < a; set++){
    	for(int set1 = set + 1; set1 < a; set1++){
      		if(count[set] > count[set1]){
        		long long int temp =count[set];
        		count[set] = count[set1];
        		count[set1] = temp;
      		}
    	}
  	}
	
	
	long long int max;
	scanf("%lld", &max);
	
	long long int sum=0;
	long long int total=0;
	for(int set=0; set<a; set++){
		sum += count[set];
		total++;
		if(sum > max){
			sum -= count[set];
			total--;
		}
	}
	printf("%lld\n", total);
	
	
  	return 0;
}
