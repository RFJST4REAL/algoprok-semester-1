#include<stdio.h>

int main(){
	int maxangka;
    scanf("%d", &maxangka);

    int arrayposition[maxangka];
    	for(int set = 0; set < maxangka; set++){
        scanf("%d", &arrayposition[set]);
		}
	int numberposition[maxangka];
		for(int set2 = 0; set2 < maxangka; set2++){
			scanf("%d", &numberposition[set2]);
		}
		
		int ansel[maxangka];
		for(int set3 = 0; set3 < maxangka; set3++){
		ansel [arrayposition[set3]]= numberposition[set3];
		}
		
		for(int set4 = 0; set4 < maxangka-1; set4++){
			printf("%d ", ansel[set4]);
		}
		printf("%d\n", ansel[maxangka-1]);
	return 0;
}
