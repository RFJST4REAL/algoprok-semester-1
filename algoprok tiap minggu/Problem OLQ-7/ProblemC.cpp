#include <stdio.h>

int main(){
	int a, z;
	char str[1001];
	scanf("%d", &z);
	for(int set=0; set<z; set++){
		scanf("%s", &str);getchar();
		int count=0;
		//jumlah string
		while(str[count] != '\0'){
			count++;
		}
		//program reverse
		printf("Case %d: ", set+1);
		for(int set1=count-1; set1>=0; set1--){
			if(str[set1] % 2){
				printf("1");
			}else printf("0");
		}
		printf("\n");
	}	

	return 0;
}


