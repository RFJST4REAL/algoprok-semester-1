#include<stdio.h>

char arr[100][100];
int sum=0;

void pacman(int b, int c, int x, int y){
	
	if(arr[x][y]=='#' || x<0 || y<0 || x>b-1 || y>c-1){
		return;
	}
	
	if(arr[x][y] == '.'){
		sum+= 1;
	}
	
	arr[x][y] = '#';
	
	pacman(b, c, x + 1, y);
	pacman(b, c, x - 1, y);
	pacman(b, c, x, y + 1);
	pacman(b, c, x, y - 1);
}

int main(){
	int a;
	scanf("%d", &a);
	int x, y;
	
	for(int i=0; i<a; i++){
		int b, c;
		scanf("%d %d", &b, &c);
		
		for(int set=0; set<b; set++){
			for(int set1=0; set1<c; set1++){
				scanf(" %c", &arr[set][set1]);
				if(arr[set][set1] == 'S'){
					x=set;
					y=set1;
				}
			}
		}
		//printf("%d %d\n", x, y);
		pacman(b, c, x, y);
		
		printf("Case #%d: %d\n", i+1, sum);
		sum=0;
	}
	
	
	
	return 0;
}
