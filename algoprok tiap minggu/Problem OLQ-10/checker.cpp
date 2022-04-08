#include "stdio.h"

int countMove = 0;
int flag[50][50] = {};
int i = 0;

int move(int x, int y,int Limit){
    flag[x][y] = 1;
    countMove++;

    if(countMove < Limit){
        move(x + 1, y + 2,Limit);
        move(x + 2, y + 1,Limit);
        move(x - 1, y - 2,Limit);
        move(x + 1, y - 2,Limit);
        move(x + 1, y + 2,Limit);
        move(x - 1, y + 2,Limit);
        move(x + 2, y - 1,Limit);
        move(x - 2, y + 1,Limit);
    }

}

int main()
{
    int testcase,walkLimit;
    char coordinates1[5][5],coordinates2[5][5];
    scanf("%d",&testcase); getchar();

    for(i = 0; i <= testcase; i++){
        scanf("%d",&walkLimit); getchar();
        scanf("%s %s",coordinates1,coordinates2); getchar();

        int coordinatesX1 = 0,coordinatesX2 = 0;

        if(coordinates1[0][0] == 'A'){
            coordinatesX1 = 1;
        } else if(coordinates1[0][0] == 'B'){
            coordinatesX1 = 2;
        } else if(coordinates1[0][0] == 'C'){
            coordinatesX1 = 3;
        } else if(coordinates1[0][0] == 'D'){
            coordinatesX1 = 4;
        } else if(coordinates1[0][0] == 'E'){
            coordinatesX1 = 5;
        } else if(coordinates1[0][0] == 'F'){
            coordinatesX1 = 6;
        } else if(coordinates1[0][0] == 'G'){
            coordinatesX1 = 7;
        } else if(coordinates1[0][0] == 'H'){
            coordinatesX1 = 8;
        }

        if(coordinates2[0][0] == 'A'){
            coordinatesX2 = 1;
        } else if(coordinates1[0][0] == 'B'){
            coordinatesX2 = 2;
        } else if(coordinates1[0][0] == 'C'){
            coordinatesX2 = 3;
        } else if(coordinates1[0][0] == 'D'){
            coordinatesX2 = 4;
        } else if(coordinates1[0][0] == 'E'){
            coordinatesX2 = 5;
        } else if(coordinates1[0][0] == 'F'){
            coordinatesX2 = 6;
        } else if(coordinates1[0][0] == 'G'){
            coordinatesX2 = 7;
        } else if(coordinates1[0][0] == 'H'){
            coordinatesX2 = 8;
        }

        int coordinatesY1,coordinatesY2 = 0;

        if(coordinates1[0][1] == '1'){
            coordinatesY1= 1;
        } else if(coordinates1[0][1] == '2'){
            coordinatesY1= 2;
        } else if(coordinates1[0][1] == '3'){
            coordinatesY1= 3;
        } else if(coordinates1[0][1] == '4'){
            coordinatesY1= 4;
        } else if(coordinates1[0][1] == '5'){
            coordinatesY1= 5;
        } else if(coordinates1[0][1] == '6'){
            coordinatesY1= 6;
        } else if(coordinates1[0][1] == '7'){
            coordinatesY1= 7;
        } else if(coordinates1[0][1] == '8'){
            coordinatesY1= 8;
        }

        if(coordinates1[0][1] == '1'){
            coordinatesY2= 1;
        } else if(coordinates1[0][1] == '2'){
            coordinatesY2= 2;
        } else if(coordinates1[0][1] == '3'){
            coordinatesY2= 3;
        } else if(coordinates1[0][1] == '4'){
            coordinatesY2= 4;
        } else if(coordinates1[0][1] == '5'){
            coordinatesY2= 5;
        } else if(coordinates1[0][1] == '6'){
            coordinatesY2= 6;
        } else if(coordinates1[0][1] == '7'){
            coordinatesY2= 7;
        } else if(coordinates1[0][1] == '8'){
            coordinatesY2= 8;
        }

        move(coordinatesX1,coordinatesY1,walkLimit);
        move(coordinatesX2,coordinatesY2,walkLimit);

        for(int k = 0; k <= 8; k++){
            for(int m = 0; m <= 8; m++){
                printf("%d\n",flag[k][m]); 
                }
            }

        flag[50][50] = {};
        countMove = 0;

    }
    return 0;
}
