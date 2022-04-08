#include<stdio.h>

struct data{
	char id[30];
	char name[200];
	char age[60];
};

int main(){
	int a;
	scanf("%d", &a);getchar();
	struct data student[a];
	
	for(int set=0; set<a; set++){
		scanf("%[^\n]", &student[set].id);getchar();
		scanf("%[^\n]", &student[set].name);getchar();
		scanf("%[^\n]", &student[set].age);getchar();
	}
	
	int cs;
	scanf("%d", &cs);getchar();
	
	for(int set=0; set<cs; set++){
		int ke;
		scanf("%d", &ke);getchar();
		
		printf("Query #%d:\n", set+1);
		printf("ID: %s\n", student[ke-1].id);
		printf("Name: %s\n", student[ke-1].name);
		printf("Age: %s\n", student[ke-1].age);
	}
	
	
	
	
	return 0;
}
