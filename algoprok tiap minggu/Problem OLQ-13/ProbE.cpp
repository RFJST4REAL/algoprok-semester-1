#include<stdio.h>
#include<string.h>

struct data{
	char name[100];
	long long int num;
};


int main (){
	
	int a;
	scanf("%d", &a);
	
	for (int i=0; i<a; i++){
		int b;
		scanf("%d", &b);
		struct data people[b];
		char validasi[100];
		long long int newnum;
		int longkap;
		char checkname[100];
		
		for(int j=0; j<b; j++){
			scanf(" %[^#]#%lld", &people[j].name, &people[j].num);
		}
		scanf(" %[^\n]", &validasi);
		for(int set=0; set<b; set++){
			if(strcmp(validasi, people[set].name) == 0){
				newnum = people[set].num;
				strcpy(checkname, people[set].name);
				longkap=set;
			}
		}

		long long int count=1;
		for(int set=0; set<b; set++){
			if(set == longkap){
				goto end;
			}
			else if(newnum < people[set].num){
				count++;
			}
			else if(newnum == people[set].num){
				if(strcmp(checkname, people[set].name) > 0){
					count++;
				}
			}
			end:;
		}
		
		printf("Case #%d: %lld\n", i+1, count);
	}
	
	
	
	return 0;
}
