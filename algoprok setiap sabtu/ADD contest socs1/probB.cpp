#include<stdio.h>


int main(){
	long int a, b, c;
	
	
	scanf("%ld %ld %ld", &a, &b, &c);
	char d[20]= "Daging";
	char s[20]= "Sayur";
	char t[20]= "Telur";
	
	
	if(a>b && a>c){
		printf("%s\n", d);
		if(b>c){
			printf("%s\n", s);
			printf("%s\n", t);
		}
		if(c>b){
			printf("%s\n", t);
			printf("%s\n", s);
		}
	}
	
	if(b>a && b>c){
		printf("%s\n", s);
		if(a>c){
			printf("%s\n", d);
			printf("%s\n", t);
		}
		if(c>a){
			printf("%s\n", t);
			printf("%s\n", d);
		}
	}
	
	if(c>a && c>b){
		printf("%s\n", t);
		if(b>a){
			printf("%s\n", s);
			printf("%s\n", d);
		}
		if(a>b){
			printf("%s\n", d);
			printf("%s\n", s);
		}
	}	
		
	return 0;
}
