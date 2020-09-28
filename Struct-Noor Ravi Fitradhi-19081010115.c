#include <stdio.h>

struct daftar_peserta{
	char nama[50];
	int umur;
};
typedef struct daftar_peserta daftar_peserta;

int main() {
	int a,b;
	daftar_peserta list[a];
	
	printf("Masukkan Banyak Peserta : ");
	scanf(" %d",&a);
	
	for(b=0;b<a;b++){
		printf("\nPeserta ke - %d\n",b+1);
		printf("\t- Nama\t: ");
		scanf(" %[^\n]%*c",&list[b].nama);
		printf("\t- Umur\t: ");
		scanf("%d",&list[b].umur);
	}
	
		printf("\nPeserta yang berhasil didata \n");
	
	for(b=0;b<a;b++){
		printf("%d. \t%s = \t%d \n",b+1,list[b].nama,list[b].umur);
	
	}
		printf("\nSelesai");
		
	return 0;
}
