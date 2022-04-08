#include <stdio.h>
#include <string.h>

struct data{
	char num[25];
	char name[500];
};



int main(){
	struct data people[1000];
	
	FILE *open;
	open = fopen("testdata.in", "r");
	
	int a;
	fscanf(open, "%d\n", &a);
	for(int set=0; set<a; set++){
		fscanf(open, "%s %[^\n]\n", &people[set].num, &people[set].name);
	}
	
	fclose(open);
	
	for(int set=0; set<a; set++){
		for(int set1=set+1; set1<a; set1++){
			if(strcmp(people[set].num, people[set1].num) > 0){
				struct data temp=people[set1];
				people[set1] = people[set];
				people[set] = temp;
			}
		}
	}
	
	for(int set=0; set<a; set++){
		printf("%s %s\n", people[set].num, people[set].name);
	}

	
	return 0;
}
