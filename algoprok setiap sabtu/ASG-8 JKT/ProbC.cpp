#include <stdio.h>
#include <string.h>

struct data{
	char code[20];
	int time;
	char date[30];
};




int main(){
	int a;
	
	scanf("%d", &a);
	struct data array[a];
	for(int set=0; set<a; set++){
		scanf(" %s", &array[set].code);
		scanf(" %s", &array[set].date);	
		scanf(" %d", &array[set].time);	
	}
	
	int b;
	scanf("%d", &b);
	for(int set=0; set<b; set++){
		int c;
		scanf("%d", &c);
		printf("Query #%d:\n", set+1);
		printf("Code: %s\n", array[c-1].code);
		printf("Day: %s\n", array[c-1].date);
		printf("Time: %02d:00\n", array[c-1].time);
		
	}
	
	return 0;
}
