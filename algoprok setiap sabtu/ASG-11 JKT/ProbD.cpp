#include <stdio.h>
#include <stdlib.h>

int main(){
 	int a, b;
  	scanf("%d %d", &a, &b);
  
  	int A[a];
  	int B[b];
  
  	for(int set = 0; set < a; set++){
    	scanf("%d", &A[set]);
  	}
  	for(int set = 0; set < b; set++){
    	scanf("%d", &B[set]);
	}
  
  	for(int set = 0; set < b; set++){
		for(int set1 = 0; set1 < a; set1++){
      		if(A[set1] == B[set]){
        		A[set1] = -100;
      		}
    	}
  	}

  	int MAX = -1;
  	for(int set = 0; set < a; set++){
    	if(A[set] > MAX){
     		MAX = A[set];
    	}
  	}
  printf("Maximum number is %d\n", MAX);
  
  return 0;
}
