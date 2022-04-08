#include<stdio.h>


int main(){
	int n;
	scanf("%d", &n);
	
	int masuk[n];
	for(int set=0; set<n; set++){
		scanf("%d", &masuk[set]);
	}
	////////////////////////////////
	int temen;
	int case1=0;
	int ubahhari1, ubahhari2;
	scanf("%d", &temen);
	for(int set1=0; set1<temen; set1++){
		scanf("%d %d", &ubahhari1, &ubahhari2);
		
		int set=0;
		for(int selisih = ubahhari1-1; selisih < ubahhari2; selisih++){
			set= set + masuk[selisih];
		}
		printf("Case #%d: ", case1+1);
		case1++;
		printf("%d\n", set);
	}
	return 0;
}
