#include <stdio.h>
#include <string.h>

struct data{
	char city[10000];
	double temp;
	char celci;
};

int main() {
	struct data temperature[10000];
	
	FILE *open;
	open = fopen("testdata.in", "r");
	
	int idx=0;
	while(!feof(open)){
		fscanf(open, "%[^#]#%lf#%c\n", &temperature[idx].city, &temperature[idx].temp, &temperature[idx].celci);
		idx++;
	}
	fclose(open);
	
	for(int set1=0; set1<idx; set1++){
		for(int set2=set1+1; set2<idx; set2++){
			double tempy1, tempy2;
			
			if(temperature[set1].celci == 'F'){
				tempy1=(temperature[set1].temp - 32) * 5 / 9;
			}
			else{
				tempy1=temperature[set1].temp;
			}
			if(temperature[set2].celci == 'F'){
				tempy2= (temperature[set2].temp - 32) * 5 / 9;
			}
			else{
				tempy2=temperature[set2].temp;
			}
			if(tempy1 >tempy2){
				struct data temp1 = temperature[set1];
				temperature[set1] = temperature[set2];
				temperature[set2] = temp1;
			}
			if(tempy1 == tempy2){
				if(strcmp(temperature[set1].city, temperature[set2].city) > 0){
					struct data temp1 = temperature[set1];
					temperature[set1] = temperature[set2];
					temperature[set2] = temp1;
				}
			}
		}
	}
		
	for(int set=0; set<idx; set++){
		printf("%s is %.2f%c\n", temperature[set].city, temperature[set].temp, temperature[set].celci);
	}
	
	
	
	
	return 0;
}
