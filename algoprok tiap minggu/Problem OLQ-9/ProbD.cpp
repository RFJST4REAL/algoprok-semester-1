#include <stdio.h>

int move = 999999, count = 0;
char Board[9][9];
int luascatur=8;
 
struct letak{
	int x, y;
};
void kuda(int x, int y){
  if(Board[x][y] == 'X' || y < 0 || x < 0 || y +1 > luascatur || x +1 > luascatur){
    return;
  }else if(Board[x][y] == 'E'){
    if(move > count){
      move = count;
    }
    return;
  }else if(count > move-1){
    return;
  }
  count++;
  Board[x][y] = 'X';
  kuda(x + 2, y + 1);
  kuda(x + 1, y + 2);
  kuda(x - 2, y + 1);
  kuda(x - 1, y + 2);
  kuda(x + 2, y - 1);
  kuda(x + 1, y - 2);
  kuda(x - 2, y - 1);
  kuda(x - 1, y - 2);
  Board[x][y] = ' ';
  count--;
  
  return;
}

int main(){
  	int a;
  	char xawal, xakhir;
    int yawal, yakhir;
    
  	scanf("%d", &a);

	for(int set = 0; set < a; set++){
    	move = 999999;
    	count = 0;
    	for(int set1 = 0; set1 < luascatur; set1++){
      		for(int set2 = 0; set2 < luascatur; set2++){
        		Board[set1][set2] = ' ';
      		}
    	}
    
    	scanf(" %c%d %c%d",&xawal, &yawal, &xakhir, &yakhir);
    	
    	///////////
    	struct letak awal, selesai;
    	awal.x = xawal - 65;
    	awal.y = yawal - 1;
    	selesai.x = xakhir - 65;
    	selesai.y = yakhir - 1;
        ///////////////
        
		Board[7-awal.y][awal.x] = 'S';
		
    	Board[7-selesai.y][selesai.x] = 'E';
    	
    	kuda(7-awal.y, awal.x);
    	
		printf("Case #%d: ", set+1);
		printf("%d\n", move);
  	}  
  	
  	
  return 0;
}
