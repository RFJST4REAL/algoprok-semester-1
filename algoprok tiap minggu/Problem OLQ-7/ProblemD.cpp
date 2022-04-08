#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	char kata[a];
	scanf("%s", &kata);

	for(int set=0; set<b; set++){
		int lol;
		scanf("%d", &lol);
		if(kata[lol]>91){
			kata[lol]-=32;
		}else {
			kata[lol]+=32;
		}
	}
	printf("%s\n", kata);

	return 0;
}


