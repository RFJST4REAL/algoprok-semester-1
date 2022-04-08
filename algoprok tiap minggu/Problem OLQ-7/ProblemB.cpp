#include <stdio.h>
//
//int main(){
//	int a;
//	scanf("%d", &a);
//	
//	for(int set=0; set<a; set++){
//		int b,c;
//		scanf("%d %d", &b, &c);
//    	int biner[11];

//    	for(int set = 11; set >= 0; set--){
//			if(b % 2 == 1){
//				biner[set] = 1;
//			}else{
//				b = b / 2;
//			}
//		}
//		int baru=11-c;
//		printf("%d\n", biner[baru]);
//	}
//    
//	return 0;
//}
int main()
{
	int cases;
	scanf("%d", &cases);
	
	for(int casenum = 0; casenum < cases; casenum++)
	{
		int dec, bindex, pos = 30;
		scanf("%d %d", &dec, &bindex);
		
		int bin[pos];
		for(int index = 0; index < pos; index++)
		{
			bin[index] = 0;
		}
		
		for(int index = pos; index >= 0; index--)
		{
			if(dec % 2 == 1)
			{
				bin[index] = 1;
			}
			dec = dec / 2;
		}
		
		printf("%d\n", bin[pos - bindex]);
	}
	return 0;
}

