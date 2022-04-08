#include<stdio.h>
#include<string.h>

struct data{
	char name[500];
	long int no;
};

int main(){
	struct data orang[1000];
	
	int a;
    scanf("%d", &a);
    for(int set1=0; set1<a; set1++){
		scanf("%s %ld", &orang[set1].name, &orang[set1].no);
	}
    
    for(int set1=0; set1 < a; set1++){
		for(int set2=set1+1; set2<a; set2++){
			if(orang[set1].no > orang[set2].no){
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
	
	for(int set1 = 0; set1 < a; set1++)
	{
		printf("%s\n", orang[set1].name);
	}
    
 return 0;   
}
