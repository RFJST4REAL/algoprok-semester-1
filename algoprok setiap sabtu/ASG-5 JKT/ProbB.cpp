#include <stdio.h>


int main(){
	long int n;
	long int a;
	long int a1;
	
	scanf("%ld", &n);
	
	for(int set=0; set<n; set++)
	{
		scanf("%ld", &a);
		
		long int arr[a];
		for(int set1=0; set1<a; set1++)
		{
			scanf("%ld", &arr[set1]);
		}	
		
		long int sumall=0;
		long int sum = sizeof (arr) / sizeof(*arr);
		for (int set2=0; set2<sum; set2++)
		{
			sumall = sumall + arr[set2];
		}
		
		printf("Case #%d: %ld\n", set+1 ,sumall);
}
	
	
	
	
	
	
	return 0;
}
