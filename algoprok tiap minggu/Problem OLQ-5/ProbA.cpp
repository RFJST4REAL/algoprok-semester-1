#include <stdio.h>

int main(){
    int Row;
    int Columns;
    scanf("%d %d", &Row, &Columns);

    int g[Row][Columns];

    for(int set = 0; set < Row; set++){
        for(int set1 = 0; set1 < Columns; set1++){
            scanf("%d", &g[set][set1]);
        }
    }

    int changeAmount;
    scanf("%d", &changeAmount);

    
    for(int set5 = 1; set5 <= changeAmount; set5++){
        int row;
        int column;
        int Value = 0;
        scanf("%d %d %d", &row, &column, &Value);
        g[row - 1][column - 1] = Value;
    }

    printf("\n");

    for(int set = 0; set < Row; set++ ){
        for(int set1 = 0; set1 < Columns; set1++){
            printf("%d ", g[set][set1]);
        }

        printf("\n");
    }



    return 0;
}
