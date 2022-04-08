#include <stdio.h>
#include <string.h>

int main(){
  int count = 0, word = 0, pagecounter = 0, check = 1;
	int isi, hal = 0, idx = 0;
	char str[2000][100];
	
	FILE *open;
	open = fopen("testdata.in", "r");
	
	fscanf(open, "%d\n", &isi);
	
	while(!feof(open)){
    fscanf(open, "%[^\n]\n", &str[idx]);
    if(strcmp(str[idx], "#") == 0){
      hal++;
		}
		idx++;
	}
	
	fclose(open);
	
	for(int set = 0; set < idx; set++){
		if(strcmp(str[set], "#") == 0)
		{
			pagecounter++;
			if(count < isi)
			{
				printf("page %d: %d word(s)\n", pagecounter, count);
				check = 0;
			}
			count = 0;
		}
		else
		{
			for(int set2 = 0; set2 <= strlen(str[set]); set2++)
			{
				if(str[set][set2] == ' ' || str[set][set2] == '\0')
				{
					if(word > 0)
					{
						count++;
						word = 0;
					}
				}
				else
				{
					word++;
				}
			}
		}
	}
	
	if(check == 1)
	{
		printf("The essay is correct\n");
	}
	
	return 0;
}
