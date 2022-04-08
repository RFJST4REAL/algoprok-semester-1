#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    
    long long int arr[a];
    for(int set=0; set<a; set++){
        scanf("%lld", &arr[set]);
    }
	
    int count = 1;
    for(int set=0; set<a; set++){
        for(int set1=set+1; set1<a; set1++){
            if(arr[set] == arr[set1]){
                goto end;
            }else if(set1 == a - 1){
                count++;
            }
        }
        end:;
    }
    
    printf("%lld\n", count);
    
    return 0;
}
