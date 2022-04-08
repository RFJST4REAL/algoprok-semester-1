#include <stdio.h>

int main(){
	int a=20;
	int bagi=a/2;
	int count=0;
	for(int set=bagi; set>0; set--){
		if(bagi % set==0){
			count++;
		}
	}
	
	
	
	return 0;
}

