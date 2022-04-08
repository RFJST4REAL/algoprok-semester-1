#include<stdio.h>

int main(){
	
//	int a;
//	int max, max2;
//	scanf("%d", &a);
//	
//	for(int set=0; set< a; set++){
//		int d;
//		scanf("%d", &d);
//		int c[d];
//		for(int set1=0; set1<d; set1++){
//			scanf("%d", &c[set1]);
//		}
//		// bilangan terbesar
//		max=c[0];
//		max2=c[0];
//		for(int set2=0; set2<d; set2++){
//			if(max < c[set2]){
//				max= c[set2];	
//			}
//		}
////		//bilangan terbesar kedua
//		
//		for(int set22=1; set22<d; set22++){
//			if(c[set22] > max2 &&  c[set22] < max){
//				max2= c[set22];	
//			}
//		}
//
//
//		int sum= max + max2;
//		printf("Case #%d: %d\n", set+1, sum);
//		
//		
//	}
    int a;
	scanf("%d", &a);
	
	for(int i = 0; i < a; i++){
		int b;
		scanf("%d", &b);
		
		int c, n = -1000000, nn = -1000000;
		for(int j = 0; j < b; j++){
			scanf("%d", &c);
			if(c > n){
				nn = n;
				n = c;
			}
			else if(c > nn){
				nn = c;
			}
		}
		
		printf("Case #%d: %d\n", i + 1, n + nn);	
	}
   
    

	
	
	

	return 0;
}
