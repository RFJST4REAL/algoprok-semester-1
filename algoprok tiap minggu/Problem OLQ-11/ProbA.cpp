#include <stdio.h>


int main(){
	int a, b, arr, set=0;
	int diffrentmap[100001], diffrentmap2[100001];
	scanf("%d %d", &a, &b);

	while(set<a){
		scanf("%d", &arr);
		if(diffrentmap[arr]==0){
			diffrentmap[arr]=set+1;
		}
		set++;
	}
	
	for(set=0; set<b; set++){
		scanf("%d", &diffrentmap2[set]);
	}
	
	for(set=0; set<b; set++){
		if(diffrentmap[diffrentmap2[set]] != 0 ){
			printf("%d\n", diffrentmap[diffrentmap2[set]]);
		}
		if(diffrentmap[diffrentmap2[set]] == 0){
			printf("-1\n");
		}
	}
	
	return 0;
}
