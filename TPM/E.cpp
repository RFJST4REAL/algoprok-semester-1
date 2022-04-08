#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int b[a];
	for(int set=0; set<a; set++){
		scanf("%d", &b[set]);
	}
	
	int count=0, count1=0;
	int type[a]={};
	for(int set=0; set<a; set++){
		count1=0;
		count1+set;
		while(count1<a){
			if(b[count] == b[count1]){
				type[set]++;
			}
			count1++;
		}
		count++;
	}
	int check;
	int type1[1]={type[0]};
	for(int set=0; set<a; set++){
		if(type1[0] == type[set+1]){
			if(b[set]>b[set+1]){
				check=set+1;
			}else check = set;
		}
	}
	printf("%d\n", b[check]);
	
	
	return 0;
}
