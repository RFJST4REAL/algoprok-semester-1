#include <stdio.h>

int main(){
    for(int i=0; i<3; i++){
    	
		int a, b, c, d;
        double sum;
        
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        sum = a+a+b+b+c+c+d;
        
		printf("%.2lf\n", sum);
    }
    
    return 0;
}
