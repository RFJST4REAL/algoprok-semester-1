#include<stdio.h>
#include<string.h>

struct data{
    int id;
    char name[50];
    int kaki;
    int inch;
    double sum;
};



int main(){
    int a;
    scanf("%d", &a);

    struct data d[a];
    for(int set=0; set<a; set++){
        long int berapainch;
        scanf("%d,%[^,],%d %d", &d[set].id, d[set].name, &d[set].kaki, &d[set].inch);
        berapainch=(d[set].kaki*12)+d[set].inch;
        d[set].sum = berapainch *2.54;
    }
    int b;
    scanf("%d", &b);
    float input[b];
    for(int i=0; i<b; i++){
        scanf("%f", &input[i]);
    }
    

    for(int set=0; set<a; set++){
        for(int set2=set+1; set2<a; set2++){
            if(d[set].sum < d[set2].sum){
                struct data temp;
                temp = d[set];
                d[set] = d[set2];
                d[set2] = temp;
            }
            else if(d[set].sum == d[set2].sum){
                if(strcmp(d[set].name, d[set2].name)>0){
                    struct data temp;
                    temp = d[set];
                    d[set] = d[set2];
                    d[set2] = temp;
                } 
            }
        }
    }
    
    int count=0;
    for(int set=0; set<b; set++){
        count=0;
        printf("Q%d:\n", set+1);
        for(int set2=0; set2<a; set2++){
            if(d[set2].sum <= input[set]){
                printf("%d %s %.2lf\n", d[set2].id, d[set2].name, d[set2].sum);
                count++;
            }
            else if(count == 0 && set2 == a-1){
                printf("-1\n");
            }
        }
    }

    

    return 0;
}