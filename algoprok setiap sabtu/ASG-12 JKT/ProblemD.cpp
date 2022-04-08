#include <stdio.h>
#include <string.h>

struct data{
	char arr[201];
};


int main(){
	struct data huruf[200];
 	int a, b;
 	scanf("%d %d", &a, &b);
 	
 	for(int set=0; set<a; set++){
 		scanf("%s", &huruf[set].arr);
	}
	
	for(int set=0; set<a; set++){
		for(int i=0; i<b; i++){
			for(int j=i+1; j<b; j++){
				if(huruf[set].arr[i] > huruf[set].arr[j]){
					struct data temp[200];
					temp[set].arr[i]= huruf[set].arr[j];
					huruf[set].arr[j] = huruf[set].arr[i];
					huruf[set].arr[i] = temp[set].arr[i];
				}
			}		
		}
	}
	for(int set=0; set<a; set++){
		for(int set1=set+1; set1<a; set1++){
			if(strcmp(huruf[set].arr, huruf[set1].arr)<0){
				struct data temp1= huruf[set1];
				huruf[set1] = huruf[set];
				huruf[set] = temp1;
			}
		}
	}
	
 	for(int set=0; set<a; set++){
 		printf("%s\n", &huruf[set].arr);
	}
 	
  return 0;
}
