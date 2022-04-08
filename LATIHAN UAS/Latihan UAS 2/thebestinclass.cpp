#include <stdio.h>
#include <string.h>

struct data{
    char num[100];
    char name[200];
    int score;
};

// void merge(struct data merge[] , int left, int right){
//     int mid=(left+right)/2;
    
//     while(left<=right){
//         if(merge[left].score < merge[mid].score){
//             left++;
//         }
//         else if(merge[left].score <= merge[mid].score){
//             struct data temp=merge[left];
//             merge[left]=merge[mid];
//             merge[mid]=temp;
//             left++;
//             mid++;
//         }
//         else{
//             if(strcmp(merge[left].name, merge[mid].name)<0){
//                 struct data temp=merge[left];
//                 merge[left]=merge[mid];
//                 merge[mid]=temp;
//                 left++;
//                 mid++;
//             }
//             else{
//                 left++;
//             }
//         }
//     }
// }

// void mergesort(struct data fuckingstudent[], int left, int right){
//     int mid=(left+right)/2;
//     if(left<right){
//         mergesort(fuckingstudent, left, mid);
//         mergesort(fuckingstudent, mid+1, right);
//         merge(fuckingstudent, left, right);
//     }

//     return;
// }


int main(){
    int a;
    scanf("%d", &a);
    struct data student[a];
    for(int set=0; set<a; set++){
        scanf("%s %s %d", student[set].num, student[set].name, &student[set].score);
    }
    printf("Case:\n");

    // int seting=a-1;
    // mergesort(student, 0, seting);

    for(int set=0; set<a; set++){
        for(int set1=set+1; set1<a; set1++){
            if(student[set].score<student[set1].score){
                struct data temp=student[set];
                student[set]=student[set1];
                student[set1]=temp;
            }
            if(student[set].score==student[set1].score){
                if(strcmp(student[set].name, student[set1].name)>0){
                    struct data temp=student[set];
                    student[set]=student[set1];
                    student[set1]=temp;
                }
            }
            if(student[set].score==student[set1].score && strcmp(student[set].name, student[set1].name)==0){
                if(strcmp(student[set].num, student[set1].num)>0){
                    struct data temp=student[set];
                    student[set]=student[set1];
                    student[set1]=temp;
                }
            }
        }
    }
    
    printf("%s %s %d\n", student[0].num, student[0].name, student[0].score);
    
    return 0;
}