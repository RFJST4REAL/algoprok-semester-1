#include<stdio.h>


int main(){
//	int n;
//	scanf("%d", &n);
//	
//	int jojo, lili, bibi;
//	int people[n];
//	
//	scanf("%d %d %d", &jojo, &lili, &bibi);
//	
//	//set orang orang
//	1<=n, jojo, lili, bibi<=100;	
//	for (int set=0; set<n; set++){
//		scanf("%d", &people[set]);
//	}
//	//totalin punya jojo dkk
//	
//	int totala;
//	totala= jojo+lili+bibi;
//	
//	////////////////////////////////////////////
//	//total jumlah nilai di people
//	int total1=0;
//	double totalp= sizeof (people) / sizeof(*people);
//	
//	for(int i = 0; i < totalp; i++){
//        total1 = total1 + people[i];
//    }
//    double sumall=0;
//    sumall= (total1 + totala) / (totalp + 3);// nilai semua jumlah
//    
//
//    if(jojo>=sumall){
//    	printf("Jojo lolos\n");
//	}
//	else {
//    	printf("Jojo tidak lolos\n");
//	}
//	
//	if(lili>=sumall){
//    	printf("Lili Lolos\n");
//	}
//	else {
//    	printf("Lili tidak lolos\n");
//	}
//	if(bibi>=sumall){
//    	printf("Bibi lolos\n");
//	}
//	else {
//    	printf("Bibi tidak lolos\n");
//	}
	


	int n;
	//input peserta
	scanf("%d", &n);
	
	//input nilai
	int jojo,lili, bibi;
	scanf("%d %d %d", &jojo, &lili, &bibi);
	
	//input nilai peserta lain
	int x[100];
	for(int i=0; i < n; i++){
		scanf("%d", &x[i]);
	}
	
	//hasil perjumlahan jojo+lili+bibi
	int rata=0;
	// hasil perjumlahan nilai peserta  lain beserta jojo+lili+bibi
	for(int j=0;j < n; j++){
		rata = rata + x[j];
	} 
	// rata-rata
	rata = (rata+jojo+lili+bibi)/(3 + n);
	
	if(jojo>=rata){
		printf("Jojo lolos\n");
	} else{
		printf("Jojo tidak lolos\n");
	}
	if(lili>=rata){
		printf("Lili lolos\n");
	} else{
		printf("Lili tidak lolos\n");
	}
	if(bibi>=rata){
		printf("Bibi lolos\n");
	} else{
		printf("Bibi tidak lolos\n");
	}
	
	
	
	return 0;
}
