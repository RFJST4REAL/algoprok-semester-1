#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	char str[100001]={0};
	for(int set=0; set<a; set++){
		scanf("%s", str);
		
		long int ganjil=0, genap=0;
		for(int set1=0; str[set1]!='\0'; set1++){
			if(set1%2==0){
				ganjil += (str[set1]-'0');
			}else{
				genap += (str[set1]-'0');
			}
		}
		
		if((ganjil-genap)%11==0){
			printf("Case #%d: Yeah\n", set+1);
		}else{
			printf("Case #%d: Nah\n", set+1);
		
		}
	}
	
	return 0;
}
