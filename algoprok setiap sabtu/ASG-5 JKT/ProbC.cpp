#include <stdio.h>


int main(){
	int n;
	int k;
	
	
	scanf("%d %d", &n, &k);
	
	for(int set=0; set<n; set++)
	{
		for(int set1=0; set1<n; set1++)
		{
			printf("#");
		}
		printf("\n");
}
	printf("\n");
	
	// baris kedua
	for(int set3=1; set3<=n; set3++)
	{
		for(int set4=1; set4<=n; set4++)
		{
			if(set3 % k == 0){
				printf("#");
			}else {
				printf(".");
			}
		}
		printf("\n");
	}
	printf("\n");
	
	//baris ketiga
	
	for(int set5=1; set5<= n; set5++){
		for(int set6=1; set6 <= n; set6++){
			if(set6 % k == 0){
				printf("#");
			}else printf(".");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
