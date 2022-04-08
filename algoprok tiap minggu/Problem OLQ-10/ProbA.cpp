#include <stdio.h>


int main(){
	int a;
	scanf("%d", &a);
	
	
	for(int set=0; set<a; set++){
		int clock=0, clock1=0;
		char setclock=' ';
		char j=' ';
		scanf("%d:%d %c%c", &clock, &clock1, &setclock, &j);
		if(setclock == 'a'){
			if(clock<12 && clock>=0){
				printf("Case #%d: %02d:%02d\n", set+1, clock, clock1);
			}
			else{
				int sum = clock-12;
				printf("Case #%d: %02d:%02d\n", set+1, sum, clock1);
			}
		}
		if(setclock == 'p'){
			if(clock==12){
				printf("Case #%d: %02d:%02d\n", set+1, clock, clock1);
			}
			else if(clock>11 && clock>=24){
				printf("Case #%d: %02d:%02d\n", set+1, clock, clock1);
			}
			else{
				int sum = clock+12;
				printf("Case #%d: %02d:%02d\n", set+1, sum, clock1);
			}
			
		}
		
		
		
	}
	
	return 0;
}
