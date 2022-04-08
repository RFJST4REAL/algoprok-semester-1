#include<stdio.h>

long long int search(long long int max, long long int min){
    if(max>min){
    	return max;
	}else{
		return min;
	}
}

int main(){

	long long int a, Value;
	
    scanf("%lld", &a);

	long long int num[a+1],Result[a+1];
    
    num[0]=0;
	Result[0]=0;

    for(long long int set=1;set<=a;set++){
        	scanf("%lld", &num[set]);
        	Result[set]=Result[set-1]+num[set];
    }
    
    scanf("%lld", &Value);

    long long int akhir =a+1,idx=a, min=0,max = 0;;

    while(akhir>0){
        if(akhir>idx){
            while(akhir>idx){
                akhir--;
            }
			min=num[akhir];
        }else{
            while(min>Value && idx>akhir){
                long long int Temp = Result[idx]-Result[akhir-1];
                idx--;
                min = min-Temp;
            }if(min<=Value){
                max=search(max,min);
            }
			akhir--;
            min+=(idx-akhir+1)*num[akhir];
        }if(min<=Value){
            max=search(max,min);
        }
    }
    printf("%lld\n",max);

	return 0;
}