#include <stdio.h>
#include <string.h>

struct data{
	long long int num;
	char name[500];
};

struct data people[1000];

int main(){
	FILE *open;
	open = fopen("testdata", "r");
	
	int a;
	fscanf(open, "%d\n", &a);
	for(int set=0; set<a; set++){
		fscanf(open, "%lld#%[^\n]\n", &people[set].num, &people[set].name);
	}
	
	fclose(open);
	
	for(int set=0; set<a; set++){
		for(int set1=set+1; set1<a; set1++){
			if(strcmp(people[set].name, people[set1].name)>0){
				struct data temp=people[set];
				people[set] = people[set1];
				people[set1] = temp;
			}
		}
	}
	for(int set=0; set<a; set++){
		printf("%lld %s\n", people[set].num, people[set].name);
	}

	
	return 0;
}
