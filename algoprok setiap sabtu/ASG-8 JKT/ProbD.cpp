#include <stdio.h>
#include <string.h>


struct data{
	char code[20];
	char name[20];
	double price;
};




int main(){
	int a;
	
	scanf("%d", &a);
	struct data array[a];
	for(int set=0; set<a; set++){
		scanf(" %s", &array[set].code);
		scanf(" %[^\n]", &array[set].name);	
		scanf(" %lf", &array[set].price);	
	}
	
	double median;
	int center=a/2;
	if(center%2==0){
		median=(array[center].price+array[center-1].price)/2;
	}else {
		median=array[center].price;
	}
	
	for(int set=0; set<a; set++){
		if(array[set].price >= median){
			printf("%s %s\n", array[set].code, array[set].name);
		}
	}
	
	return 0;
}
