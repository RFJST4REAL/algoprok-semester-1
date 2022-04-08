#include <stdio.h>


int main(){	
            int b;
            scanf("%d", &b);
            long int c[b];
                for(int var = 0; var < b; var++){
                  scanf("%ld", &c[var]);
            }

        for(int i = 0; i < b; i++){
                for(int j = i + 1; j < b; j++) {
                if(c[i] > c[j]) {
                 int temp = c[i];
                      c[i] = c[j];
                      c[j] = temp;
                }
              }
        }
    
        int sum = 0;
        for(int i = 0; i < b; i++){
            int tempsum = 0;
            for(int j = 0; j < b; j++){
                if(c[i] == c[j]){
                  tempsum++;
                }
              }
              if(tempsum > sum){
                sum = tempsum;
              }
        }

        for(int i = 0; i < b; i++){
            int tempsum = 0;
              for(int j = 0; j < b; j++){
                if(c[i] == c[j]){
                  tempsum++;
                }
              }
              if(tempsum == sum){
                printf("%ld\n", c[i]);
                break;
              }
        }
    
    return 0;
}

