#include <stdio.h>
#include <string.h>

int main(){
	int a;
	scanf("%d", &a);
	
	for(int set=0; set<a; set++){
		int b;
		scanf("%d", &b);
		int array[b];
		for(int set1=0; set1<b; set1++){
			scanf("%d", &array[set1]);
		}
		int patokan=0;
		for(int set1=0; set1<b; set1++){
			if(array[set1]>patokan){
				patokan = array[set1];
			}
		}
		int newarray[patokan]={0};
		
		for (int set1=0; set1<b; set1++) {
            newarray[array[set1]]++;
        }
        int lol=0;
        for (int set1=0; set1<=patokan; set1++) {
            if (newarray[set1] > 0){
                lol++;
            } 
        }
		printf("Case #%d: %d\n", set+1, lol);
		
		
	}
}
