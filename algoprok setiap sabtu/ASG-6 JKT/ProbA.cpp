#include <stdio.h>


int main(){
	int a;
	scanf("%d", &a);
	
	int n[a];
	for(int set=0; set<a; set++)
	{
		scanf("%d", &n[set]);
	}
	
	int b;
	scanf("%d", &b);
	int d=n[a];
	for(int set=0; set < a; set++)
	{
		scanf("%d %d", &d, &n[set]);
	}
	
	for(int set1=0; set1< a; set1++)
	{
		printf("%d", n[set1]);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
