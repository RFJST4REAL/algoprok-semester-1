#include<stdio.h>


int main(){


	int berapa;
	scanf("%d", &berapa);
	
	for(int set = 0; set < berapa; set++)
	{
		int n;
		scanf("%d", &n);
		
		printf("Case #%d:\n", set+1);
		
		for(int set1 = 1; set1 <= n; set1++)
		{
			for(int set2 = 1; set2 <= (n - set1); set2++)
			{
				printf(" ");
			}
			for(int set3 = 1; set3 <= set1; set3++)
			{
				if((set3 + n) % 2 == 0)
				{
					printf("*");
				}
				else
				{
					printf("#");
				}
			}
			
			printf("\n");
		}
	}
	
	return 0;
}









