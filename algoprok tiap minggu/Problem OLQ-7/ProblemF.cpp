#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    long long int b[a], sum=0;
    long long int temp[1];
    for (int set=0; set<a; set++){
     	scanf("%lld", &b[set]);
    	sum+=b[set];
    }
    long long int seti= b[0];
    temp[0]=seti;
    for(int set=0; set<a; set++){
    	if(temp[0] % 2 ==0){
    		temp[0]=b[set+1];
    		goto clean;
		}
    	if(b[set]!=0){
    		if(temp[0] > b[set] && b[set] != 0 && b[set] % 2 != 0){
				temp[0] = b[set];
			}
		}
		clean:;
	}
	if(sum % 2 == 1){
		sum-=temp[0];
	}else sum=sum;
	
    printf("%lld\n", sum);
    
    return 0;
}
