#include <stdio.h>

struct familyDetail{
  char ayah[100];
  char ibu[100];
  int sodara;
};
struct student{
  char kodemurid[100];
  char namamurid[100];
  char gendermurid[100];
  struct familyDetail keluarga;
};
struct lecturer{
  char kodedosen[100];
  char namadosen[100];
  char genderdosen[100];
  int jumlahmurid;
  struct student students[100];
};

int main(){
  int a;
  scanf("%d",&a);
  struct lecturer set[a];
  for(int cases = 0; cases < a; cases++){
    scanf(" %[^\n]", &set[cases].kodedosen);
    scanf(" %[^\n]", &set[cases].namadosen);
    scanf(" %[^\n]", &set[cases].genderdosen);
    scanf(" %d", &set[cases].jumlahmurid);
    for(int i = 0; i < set[cases].jumlahmurid; i++){
      scanf(" %[^\n]", &set[cases].students[i].kodemurid);
      scanf(" %[^\n]", &set[cases].students[i].namamurid);
      scanf(" %[^\n]", &set[cases].students[i].gendermurid);
      scanf(" %[^\n]", &set[cases].students[i].keluarga.ayah);
      scanf(" %[^\n]", &set[cases].students[i].keluarga.ibu);
      scanf(" %d", &set[cases].students[i].keluarga.sodara);
    }
  }
  int setdosen;
    scanf(" %d", &setdosen);
    printf("Kode Dosen: %s\n", set[setdosen-1].kodedosen);
    printf("Nama Dosen: %s\n", set[setdosen-1].namadosen);
    printf("Gender Dosen: %s\n", set[setdosen-1].genderdosen);
    printf("Jumlah Mahasiswa: %d\n", set[setdosen-1].jumlahmurid);
    for(int i = 0; i < set[setdosen-1].jumlahmurid; i++){
      printf("Kode Mahasiswa: %s\n", set[setdosen-1].students[i].kodemurid);
      printf("Nama Mahasiswa: %s\n", set[setdosen-1].students[i].namamurid);
      printf("Gender Mahasiswa: %s\n", set[setdosen-1].students[i].gendermurid);
      printf("Nama Ayah: %s\n", set[setdosen-1].students[i].keluarga.ayah);
      printf("Nama Ibu: %s\n", set[setdosen-1].students[i].keluarga.ibu);
      printf("Jumlah Saudara Kandung: %d\n", set[setdosen-1].students[i].keluarga.sodara);
    }
  return 0;
}