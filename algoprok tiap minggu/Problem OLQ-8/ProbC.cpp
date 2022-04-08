#include <stdio.h>
#include <string.h>

int main(){
	int a;
	char b[100001];
	scanf("%d", &a);
	
	for(int set=0; set<a; set++){
		scanf("%s", &b);
		
		int count= strlen(b);
		int sum=0;
		
		int newarray[50]={0};
		
		for (int set1=0; set1<count; set1++) {
            int set2 = b[set1] - 97;
            	if (set2 >= 0 && set2 <= 27) {
                	newarray[set2]+=1;
            	}
        }
        int lol=0;
        for (int set1=0; set1<50; set1++) {
            if (newarray[set1] > 0){
                lol++;
            } 
        }
//      	for(int set=0; set<count; set++){
//      		printf("%c", newb[set]);
//		}	
		if(lol %2 ==0){
			printf("Case #%d: Breakable\n", set+1);
		}else printf("Case #%d: Unbreakable\n", set+1);
	}
}
