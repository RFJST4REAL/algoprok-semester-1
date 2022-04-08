#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        long long int b, c;
        scanf("%lld %lld", &b, &c);
        long long int arr[b];
        for(int set=0; set<b; set++){
        	scanf("%lld", &arr[set]);
		}
		int count=0;
		for(int set=0;  set<b; set++){
			for(int set1=set+1; set1<b; set1++){
				if(arr[set]>arr[set1]){
					count++;
					long long int temp= arr[set];
					arr[set] = arr[set1];
					arr[set1] = temp;
				}
			}
		}
		printf("Case #%d: %d\n", i+1, count*c);
    }
    
    return 0;
}


  

