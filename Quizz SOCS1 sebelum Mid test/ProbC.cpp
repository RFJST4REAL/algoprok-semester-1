#include <stdio.h>

int main() {
    long long int like[90]={0,1};
    for(int set=2; set<90; set++){
    	like[set]= like[set-1]+ like[set-2];
	}
    
    long long int a;
    scanf("%lld", &a);
    long long int hari[a];
    
    for(int set=0; set<a; set++){
    	scanf("%lld", &hari[set]);
	}
	
	long long int arr[a];
	for(int set=0; set<a; set++){
		arr[set] = like[hari[set]-1];
		printf("Case #%lld: %lld\n", set+1, arr[set]);
	}
    return 0;
}
