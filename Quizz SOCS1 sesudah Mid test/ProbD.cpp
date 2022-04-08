#include<stdio.h>
#include<string.h>


int main(){
	int a;
	scanf("%d", &a);getchar();
	char name[200][200];
	
	for(int set=0; set<a; set++){
		int b, c;
		
		scanf("%d %d", &b, &c);getchar();
		
		for(int i=0; i<b; i++){
			scanf("%[^\n]", &name[i]);getchar();
		}
		for(int i=0; i<b; i++){
			for(int j=i+1; j<b; j++){
				if(strcmp(name[i], name[j])>0){
					char temp[200];
					strcpy(temp, name[i]);
					strcpy(name[i], name[j]);
					strcpy(name[j], temp);
				}
			}
		}
		printf("Case #%d: %s\n", set+1, name[c-1]);
		
		
	}
	
	return 0;
}
