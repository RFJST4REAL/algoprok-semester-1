#include<stdio.h>
#include<string.h>

struct data{
    char accnumber[50];
    char nama[50];
    int umur;
    double saldo;
};

int main(){
    int a, b;
    scanf("%d",&a);
    struct data p[400];
    for(int set=0; set<a; set++){
        scanf(" %[^,],%[^,],%d,%lf", &p[set].accnumber, &p[set].nama, &p[set].umur, &p[set].saldo);
        //printf("%s,%s,%d,%.2lf\n", p[set].accnumber, p[set].nama, p[set].umur, p[set].saldo);
    }

    scanf("%d",&b);
    char valid[b][50];
    for(int set=0; set<b; set++){
        scanf(" %[^\n]", &valid[set]);
        if(strcmp(valid[set], p[set].accnumber)){
            printf("%s %d %.2lf\n", p[set].nama, p[set].umur, p[set].saldo);
        }
    }
    

    return 0;
}
