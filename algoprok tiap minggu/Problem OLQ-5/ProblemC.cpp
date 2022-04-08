#include<stdio.h>
#include <stdlib.h>
int main(){
	int jumlahbarang;
    scanf("%d", &jumlahbarang);

    int inputbarang[jumlahbarang]; 
    for(int set = 0; set < jumlahbarang; set++){
    	scanf("%d", &inputbarang[set]);
    }
    
    int jumlahperubahan;
	scanf("%d", &jumlahperubahan);	
	int numcase=0;
	
	for (int set2 = 0; set2 < jumlahperubahan; set2++){
		int absenperubahan, jadi_sekian;
		scanf("%d %d", &absenperubahan, &jadi_sekian);
		inputbarang[absenperubahan-1]=jadi_sekian;
		numcase++;
		printf("Case #%d: ", numcase);
		inputbarang > 0;
			for(int set3 = 0; set3 < jumlahbarang-1; set3++){	
				printf("%d ", inputbarang[set3]);
			}
		printf("%d\n", inputbarang[jumlahbarang-1]);
	}

	

	return 0;
}

	
	
	
	
	

