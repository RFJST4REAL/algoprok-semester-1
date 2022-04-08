//cara pertama
//#include <stdio.h>
//
//int main(){
//	
//	unsigned long int a, b=1;
//	scanf("%lu", &a);
//	printf("%lu\n", (b<<a)-b);
//	
//	return 0;
//}

//cara kedua
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	long long int b=1;
	for(int i=0;i<Number;i++){
		b=b*2;
	}
	printf("%lld\n",b-1);
}
