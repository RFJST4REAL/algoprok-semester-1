#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    
    
    for(int set=0; set<a; set++){
    	char nama[101], datebirth[100], placebirth[101], school[101];
    	long long int nim, age, postal, rekening, height, sibling;
    	printf("Mahasiswa ke-%d:\n", set+1);
    	scanf("%s", &nama);
    	printf("Nama: %s\n", nama);
    	scanf("%lld", &nim);
    	printf("NIM: %lld\n", nim);
    	scanf("%lld", &age);
    	printf("Umur: %lld\n", age);
    	scanf("%lld", &postal);
    	printf("Kode Pos: %lld\n", postal);
    	scanf("%s", &placebirth);
    	printf("Tempat Lahir: %s\n", placebirth);
    	scanf("%s", &datebirth);
    	printf("Tanggal Lahir: %s\n", datebirth);
    	scanf(" %[^\n]", &school);
    	printf("Almamater SMA: %s\n", school);
    	scanf("%lld", &sibling);
    	printf("Jumlah Saudara Kandung: %lld\n", sibling);
    	scanf("%lld", &height);
    	printf("Tinggi Badan: %lld\n", height);
    	scanf("%lld", &rekening);
    	printf("NOMOR REKENING: %lld\n", rekening);
    	
	}
    
    
    
    
    return 0;
}
