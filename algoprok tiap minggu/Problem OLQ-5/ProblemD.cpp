#include<stdio.h>

int main(){
	
	int a, b;
	
    scanf("%d", &a);
	
	for(int set=0; set<a; set++){
		scanf("%d", &b);
		long int c[2001];
		for(int set1=0; set1<b; set1++){
			scanf("%ld", &c[set1]);
		}
		
		long int sum=0, jumlahlebih=0;
		
		for(int set2=0; set2<b; set2++){
			sum = sum + c[set2];
		}
		for(int set3=0; set3<b; set3++){
			if(c[set3]>sum){
				jumlahlebih +=1;
			}
		}
		printf("Case #%d: %ld\n%ld\n", set+1 ,sum, jumlahlebih);
	}
    
    

	
	
	

	return 0;
}
