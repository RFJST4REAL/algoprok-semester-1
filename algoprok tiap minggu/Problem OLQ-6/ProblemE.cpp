#include <stdio.h>
#include <string.h>

int main(){

//	int a, jumlahstring=0, setchar;
//	char string[1000], akhir[1000];
//	scanf("%d", &a);
//	int b=0;
//	
//	for(int set=0; set<a; set++){
//		int set1;
//		scanf(" %[^\n]", &string, sizeof(&string));
//		while(string[jumlahstring] != '\0'){
//			jumlahstring++;
//		}
//		setchar = jumlahstring - 1;
//		for(set1=0; set1<jumlahstring; set1++){
//			akhir[set1] = string [setchar];
//			setchar--;
//		}
//		akhir[set1]= '\0';
//		printf("Case #%d : %s", set+1, akhir); 
//		
//		printf("\n");
//	}

    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        char string[1200];
        scanf("%s", &string);
        
		int length = strlen(string);
        printf("Case #%d : ", i + 1);
		
		for (int j = 0; j < length; j++) {
            printf("%c", string[length-j-1]);
        }
        printf("\n");
    }
    
    return 0;
}


  

