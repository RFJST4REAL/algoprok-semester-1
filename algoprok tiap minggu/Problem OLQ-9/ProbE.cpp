#include <stdio.h>

char p[300][300];
int sum=0;
int baris = 0;
int kolom = 0;
char map[255][255];
int x;
int y;

void operasipacman(int x, int y){
	if(p[x][y]=='*'){
   		sum++;
	}
	if(p[x][y]=='#'|| x >= baris || y>= kolom || x<0 || y<0 || p[x][y]==' '){
   		return;
	}
	else{
		p[x][y] = '#';
	}
		operasipacman(x, y + 1);
  		operasipacman(x, y - 1);
		operasipacman(x + 1, y);
  		operasipacman(x - 1, y);
}

int main(){
	int a;
	scanf("%d", &a);
	
	for(int i=0; i<a; i++){
		int b, c;
		scanf("%d %d", &b, &c);getchar();
		
		baris=b;
		kolom=c;
		
		for(int set = 0; set < b; set++){
			for(int set1 = 0; set1 < c + 1; set1++){
				scanf("%c", &p[set][set1]);
				if (p[set][set1] == 'P'){
					x = set;
					y = set1;
				}
			}
		}
		operasipacman(x, y);
		
		printf("Case #%d: %d\n", i+1, sum);
		
		sum = 0;
		b = 0;
		c = 0;
		x = 0;
		y = 0;	
		for(int j = 0; j < 255; j++){
			for(int k = 0; k < 255; k++){
				p[j][k] = ' ';
			}
		}
		
	}
}
