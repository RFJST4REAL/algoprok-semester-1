#include <stdio.h>


int main(){
	int n;
	int gojo, bipay;
	char go[20]= "Go-Jo";
	char pay[20]= "Bi-Pay";
	
	scanf("%d", &n);
	
	for(int set=0; set<n; set++)
	{
		scanf("%d %d", &gojo, &bipay);
		
		printf("Case #%d: ", set+1);
		
		if (gojo>bipay)
		{
			printf("%s\n", go);
		}else {printf("%s\n", pay);
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}
