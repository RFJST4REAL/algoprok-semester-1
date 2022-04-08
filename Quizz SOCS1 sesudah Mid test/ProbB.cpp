#include<stdio.h>


int main(){
	int a;
	scanf("%d", &a);
	
	for(int set=0; set<a; set++){
		int b;
		scanf("%d", &b);
		int c[b];
		for(int set1=0; set1<b; set1++){
			scanf("%d", &c[set1]);
		}
		int search;
		scanf("%d", &search);
		
		for(int set1=0; set1<b; set1++){
			for(int set2=set1+1; set2<b; set2++){
				if(c[set1] > c[set2]){
					int temp = c[set1];
					c[set1] = c[set2];
					c[set2] = temp;
				}
			}
		}
		
		for(int set1=0; set1<b; set1++){
			if(search == c[set1]){
				if((set1 + 1 )== b){
					printf("CASE #%d: %d %d\n", set+1, c[set1-1], search);
					break;
				}
				if(c[set1+1] != NULL){	
					printf("CASE #%d: %d %d\n", set+1, search, c[set1+1]);
					break;
				}
			}
			if(search != c[set1] && set1==b-1){
				printf("CASE #%d: -1 -1\n", set+1);
			}
		}
		
	}
	
	
	return 0;
}
