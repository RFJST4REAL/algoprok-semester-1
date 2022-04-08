#include<stdio.h>
#include<string.h>

struct data{
    char code[50];
    char name[50];
    long int price;
};


int main(){
    int a, b;
    struct data p[400];
    scanf("%d", &a);
    for(int set=0; set<a; set++){
        scanf(" %[^,],%[^,],%ld", &p[set].code, &p[set].name, &p[set].price);getchar();;
    }
    char valid[50];
    scanf("%[^\n]", &valid);getchar();
    int count=0;
    long int sum=0;
    for(int set=0; set<a; set++){
        if(strcmp(valid, p[set].code)==0){
            printf("%s %s %ld\n", p[set].code, p[set].name, p[set].price);
            count++;
            sum+=p[set].price;
        }
        if(set == a-1){
            printf("Total Recipients: %d\nTotal Amount: %ld", count, sum);
        }
    }


    return 0;
}