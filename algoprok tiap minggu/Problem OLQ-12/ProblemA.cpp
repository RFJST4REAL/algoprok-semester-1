#include<stdio.h>
#include<string.h>

struct data{
	char name[100];
	long long int no;
};

struct data orang[100];


int main(){
	int a;
	scanf("%d", &a);
	
	for(int set=0; set<a; set++){
		int b;
		scanf("%d", &b);
		
		for(int set1=0; set1<b; set1++){
			scanf("%[^#]#%lld", &orang[set1].name, &orang[set1].no);
		}
		for(int set1=0; set1<b; set1++){
			for(int set2=set1+1; set2<b; set2++){
				if(orang[set1].no < orang[set2].no){
					long long int temp= orang[set2].no;
					struct data temp1;
					strcpy(temp1.name, orang[set2].name);
					
					orang[set2].no = orang[set1].no;
					strcpy(orang[set2].name, orang[set1].name);
					
					orang[set1].no=temp;
					strcpy(orang[set1].name, temp1.name);
				}
				if(orang[set1].no == orang[set2].no){
					if(strcmp(orang[set1].name, orang[set2].name) > 0){
						long long int temp= orang[set2].no;
						struct data temp1;
						strcpy(temp1.name, orang[set2].name);
						
						orang[set2].no = orang[set1].no;
						strcpy(orang[set2].name, orang[set1].name);
						
						orang[set1].no=temp;
						strcpy(orang[set1].name, temp1.name);
					}
				}
			}
		}
		
		printf("Case #%d:", set+1);
		
		for(int set1 = 0; set1 < b; set1++)
		{
			printf("%s - %lld", orang[set1].name, orang[set1].no);
		}
		
		printf("\n");	
	}

	return 0;
}
