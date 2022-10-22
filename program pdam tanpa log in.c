/*PROGRAM TAGIHAN REKENING AIR

KOMANG AYU AGUNG ARYA APRILIA (2205551030)
PANDE KOMANG INDAH TRIROSHANTI (2205551053)*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define adm 5000
#define BPM_R 1000
#define BPM_N 2000
#define denda 0.1*biayapemakaian

int menu ();
int menu1();
int menu2();
int menu3();
int D1_1 ();
int D1_2 ();
int D2_1 ();
int D2_2 ();
int D3_1 ();
int D3_2 ();
int D4_1 ();
int D4_2 ();

int D1_3 ();
int D1_4 ();
int D2_3 ();
int D2_4 ();
int D3_3 ();
int D3_4 ();
int D4_3 ();
int D4_4 ();
int D5_1 ();
int D5_2 ();
int D5_3 ();
int D5_4 ();

int E1_1 ();
int E1_2 ();
int E1_3 ();
int E1_4 ();
int E2_1 ();
int E2_2 ();
int E2_3 ();
int E2_4 ();
int E3_1 ();
int E3_2 ();
int E3_3 ();
int E3_4 ();

/*username = admin
password = pdam*/

int main(){
		int menu;
	system ("cls");
	printf("\n\t==================================================");
    printf("\n\t||        PEMBAYARAN PEMAKAIAN AIR PDAM         ||");
    printf("\n\t||----------------------------------------------||");
    printf("\n\t||     K E L O M P O K  P E L A N G G A N       ||");
    printf("\n\t||----------------------------------------------||");
    printf("\n\t|| [1] Rumah Tangga Bersubsidi                  ||");                           
    printf("\n\t|| [2] Rumah Tangga Non Subsidi                 ||");
    printf("\n\t|| [3] Niaga                                    ||");
	printf("\n\t==================================================");
	printf("\n\t Masukkan pilihan anda [1][2][3] : ");
	while (scanf("%d", &menu)==0 || menu < 1 || menu > 3){
		printf("\t\t----------------------------------------------\n");
        printf("\t\tKarakter yang Anda inputkan salah!\n");
        printf("\t\tMohon inputkan pilihan yang benar.\n");
        printf("\t\t----------------------------------------------\n");
        printf("\t\tInputkan pilihan anda:");
        while(getchar()!='\n');
	}
	
	if (menu==1){
		menu1();
	}else if (menu==2){
		menu2();
	}else {
		menu3();
	}
	 return 0;
}	
  
	int menu1(){
		int rts;
		system ("cls");
	printf("\n\t==========================================================================");
    printf("\n\t||                     RUMAH TANGGA BERSUBSIDI                          ||");
    printf("\n\t||----------------------------------------------------------------------||");
    printf("\n\t||               I N S T R U K S I  P E L A N G G A N                   ||");
    printf("\n\t||----------------------------------------------------------------------||");
    printf("\n\t||       Pilihlah sesuai dengan kondisi tempat tinggal anda!            ||");
    printf("\n\t||----------------------------------------------------------------------||");
    printf("\n\t||  No	|  Lebar jalan (termasuk got & berm) | Daya listrik |  Golongan ||");
    printf("\n\t||----------------------------------------------------------------------||");
    printf("\n\t||  [1] |             0-3.99 meter           |     450 VA   |    D1-1   ||"); 
	printf("\n\t||  [2] |             0-3.99 meter           |     900 VA   |    D1-2   ||");                           
    printf("\n\t||  [3] |             4-6.99 meter           |     450 VA   |    D2-1   ||");
    printf("\n\t||  [4] |             4-6.99 meter           |     900 VA   |    D2-2   ||");
    printf("\n\t||  [5] |              7-10 meter            |     450 VA   |    D3-1   ||");
    printf("\n\t||  [6] |              7-10 meter            |     900 VA   |    D3-2   ||");
    printf("\n\t||  [7] |              >10 meter             |     450 VA   |    D4-1   ||");
    printf("\n\t||  [8] |              >10 meter             |     900 VA   |    D4-2   ||");
	printf("\n\t==========================================================================");
	printf("\n\t Masukkan pilihan anda [1][2][3][4][5][6][7][8] : ");
		while (scanf("%d", &rts)==0 || rts < 1 || rts > 8){
		printf("\t\t----------------------------------------------\n");
        printf("\t\tKarakter yang Anda inputkan salah!\n");
        printf("\t\tMohon inputkan pilihan yang benar.\n");
        printf("\t\t----------------------------------------------\n");
        printf("\t\tInputkan pilihan anda:");
        while(getchar()!='\n');
	}
	
	if (rts==1){
		D1_1();
	}else if(rts==2){
		D1_2();
	}else if(rts==3){
		D2_1();
	}else if(rts==4){
		D2_2();
	}else if(rts==5){
		D3_1();
	}else if (rts==6){
		D3_2();
	}else if (rts==7){
		D4_1();
	}else{
		D4_2();
	}
}
	int menu2(){
		int rtn;
		system ("cls");
	printf("\n\t===============================================================================");
    printf("\n\t||                        RUMAH TANGGA NON-SUBSIDI                           ||");
    printf("\n\t||---------------------------------------------------------------------------||");
    printf("\n\t||                  I N S T R U K S I  P E L A N G G A N                     ||");
    printf("\n\t||---------------------------------------------------------------------------||");
    printf("\n\t||          Pilihlah sesuai dengan kondisi tempat tinggal anda!              ||");
    printf("\n\t||---------------------------------------------------------------------------||");
    printf("\n\t||  No	|            Deskripsi golongan           | Daya listrik |  Golongan ||");
    printf("\n\t||---------------------------------------------------------------------------||");
    printf("\n\t||  [1] |terdapat jalan yg lebarnya 0-3.99 meter  |    1300 VA   |    D1-3   ||"); 
	printf("\n\t||  [2] |terdapat jalan yg lebarnya 0-3.99 meter  |   >1300 VA   |    D1-4   ||");                           
    printf("\n\t||  [3] |terdapat jalan yg lebarnya 4-6.99 meter  |    1300 VA   |    D2-3   ||");
    printf("\n\t||  [4] |terdapat jalan yg lebarnya 4-6.99 meter  |   >1300 VA   |    D2_4   ||");
    printf("\n\t||  [5] |terdapat jalan yg lebarnya 7-10 meter    |    1300 VA   |    D3-3   ||");
    printf("\n\t||  [6] |terdapat jalan yg lebarnya 7-10 meter    |   >1300 VA   |    D3-4   ||");
    printf("\n\t||  [7] |terdapat jalan yg lebarnya >10 meter     |    1300 VA   |    D4-3   ||");
    printf("\n\t||  [8] |terdapat jalan yg lebarnya >10 meter     |   >1300 VA   |    D4-4   ||");
    printf("\n\t||  [9] |selain tempat tinggal jg berupa usaha    |     450 VA   |    D5-1   ||");
    printf("\n\t||  [10]|selain tempat tinggal jg berupa usaha    |     900 VA   |    D5-2   ||");
    printf("\n\t||  [11]|selain tempat tinggal jg berupa usaha    |    1300 VA   |    D5-3   ||");
    printf("\n\t||  [12]|selain tempat tinggal jg berupa usaha    |   >1300 VA   |    D5-4   ||");
	printf("\n\t===============================================================================");
	printf("\n\t Masukkan pilihan anda [1][2][3][4][5][6][7][8][9][10][11][12] : ");
	while (scanf("%d", &rtn)==0 || rtn < 1 || rtn > 12){
		printf("\t\t----------------------------------------------\n");
        printf("\t\tKarakter yang Anda inputkan salah!\n");
        printf("\t\tMohon inputkan pilihan yang benar.\n");
        printf("\t\t----------------------------------------------\n");
        printf("\t\tInputkan pilihan anda:");
        while(getchar()!='\n');
	}
	
	
		if (rtn==1){
		D1_3();
	}else if(rtn==2){
		D1_4();
	}else if(rtn==3){
		D2_3();
	}else if(rtn==4){
		D2_4();
	}else if(rtn==5){
		D3_3();
	}else if (rtn==6){
		D3_4();
	}else if (rtn==7){
		D4_3();
	}else if (rtn==8){
		D4_4();
	}else if (rtn==9){
		D5_1();
	}else if (rtn==10){
		D5_2();
	}else if (rtn==11){
		D5_3();
	}else {
		D5_4();
	}
	
}
    
    int menu3(){
    	int niaga;
    	system ("cls");
	printf("\n\t==============================================================================================================");
    printf("\n\t||                                                 NIAGA                                                    ||");
    printf("\n\t||----------------------------------------------------------------------------------------------------------||");
    printf("\n\t||                               I N S T R U K S I  P E L A N G G A N                                       ||");
    printf("\n\t||----------------------------------------------------------------------------------------------------------||");
    printf("\n\t||                          Pilihlah sesuai dengan kondisi bidang usaha anda!                               ||");
    printf("\n\t||----------------------------------------------------------------------------------------------------------||");
    printf("\n\t||  No	|    Kategori  |                       Deskripsi                         |  Daya listrik | Golongan ||");
    printf("\n\t||----------------------------------------------------------------------------------------------------------||");
    printf("\n\t||  [1] | Niaga Kecil  | Jalan di depan usaha memiliki lebar 0-6.99 meter        |     450 VA    |   E1-1   ||");
	printf("\n\t||  [2] | Niaga Kecil  | Jalan di depan usaha memiliki lebar 0-6.99 meter        |     900 VA    |   E1-2   ||"); 
	printf("\n\t||  [3] | Niaga Kecil  | Jalan di depan usaha memiliki lebar 0-6.99 meter        |    1300 VA    |   E1-3   ||");
	printf("\n\t||  [4] | Niaga Kecil  | Jalan di depan usaha memiliki lebar 0-6.99 meter        |   >1300 VA    |   E1-4   ||");
	printf("\n\t||  [5] | Niaga Sedang | Jalan di depan usaha memiliki lebar 7-10 meter          |     450 VA    |   E2-1   ||"); 
	printf("\n\t||  [6] | Niaga Sedang | Jalan di depan usaha memiliki lebar 7-10 meter          |     900 VA    |   E2-2   ||"); 
	printf("\n\t||  [7] | Niaga Sedang | Jalan di depan usaha memiliki lebar 7-10 meter          |    1300 VA    |   E2-3   ||");
	printf("\n\t||  [8] | Niaga Sedang | Jalan di depan usaha memiliki lebar 7-10 meter          |   >1300 VA    |   E2-4   ||");                            
    printf("\n\t||  [9] | Niaga Besar  | Jalan di depan usaha memiliki lebar >10 meter           |     450 VA    |   E3-1   ||");
    printf("\n\t|| [10] | Niaga Besar  | Jalan di depan usaha memiliki lebar >10 meter           |     900 VA    |   E3-2   ||");
    printf("\n\t|| [11] | Niaga Besar  | Jalan di depan usaha memiliki lebar >10 meter           |   >1300 VA    |   E3-3   ||");
    printf("\n\t|| [12] | Niaga Besar  | Jalan di depan usaha memiliki lebar >10 meter           |    1300 VA    |   E3-4   ||");
	printf("\n\t==============================================================================================================");
	printf("\n\t Masukkan pilihan anda [1][2][3][4][5][6][7][8][9][10][11][12]: ");
	while (scanf("%d", &niaga)==0 || niaga < 1 || niaga > 12){
		printf("\t\t----------------------------------------------\n");
        printf("\t\tKarakter yang Anda inputkan salah!\n");
        printf("\t\tMohon inputkan pilihan yang benar.\n");
        printf("\t\t----------------------------------------------\n");
        printf("\t\tInputkan pilihan anda:");
        while(getchar()!='\n');
	} 
	
	if (niaga==1){
		E1_1();
	}else if(niaga==2){
		E1_2();
	}else if(niaga==3){
		E1_3();
	}else if(niaga==4){
		E1_4();
	}else if(niaga==5){
		E2_1();
	}else if (niaga==6){
		E2_2();
	}else if (niaga==7){
		E2_3();
	}else if (niaga==8){
		E2_4();
	}else if (niaga==9){
		E3_1();
	}else if (niaga==10){
		E3_2();;
	}else if (niaga==11){
		E3_3();
	}else{
		E3_4();
	}
}

int D1_1 (){
	int tanggal,rek;
	float bulan_lalu, bulan_ini;
	char nama[50];
	char ulang;
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA BERSUBSIDI              ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (1780*pemakaian);

        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 1.780");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (2060*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.060");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (5880*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 5.880");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (1780*pemakaian);
	total = adm + BPM_R + (1780*pemakaian) + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 1.780");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (2060*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.060");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (5880*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 5.880");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
} 

int D1_2 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA BERSUBSIDI              ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (2060*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.060");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (2340*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.340");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (5940*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 5.940");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (2060*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.060");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (2340*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.340");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (5940*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 5.940");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D2_1 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA BERSUBSIDI              ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (2340*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.340");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (2620*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.620");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (6000*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.000");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (2340*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.340");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (2620*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.620");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (6000*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.000");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D2_2 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA BERSUBSIDI              ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (2620*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.620");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (2900*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.900");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (6060*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.060");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (2620*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.620");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (2900*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.900");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (6060*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.060");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D3_1 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA BERSUBSIDI              ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (2900*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.900");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (3180*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.180");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (6120*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.120");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (2900*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 2.900");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (3180*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.180");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (6120*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.120");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D3_2 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA BERSUBSIDI              ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }


	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (3180*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.180");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (3460*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.460");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (6180*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.180");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (3180*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.180");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (3460*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.460");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (6120*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.180");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D4_1 (){
	int tanggal,rek; 
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA BERSUBSIDI              ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (3460*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.460");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (3740*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.740");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (6240*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.240");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (3460*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.460");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (3740*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.740");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (6240*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.240");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D4_2 (){
	int tanggal,rek; 
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA BERSUBSIDI              ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaia nbulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (3740*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.740");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (4020*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 4.020");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (6300*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.300");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (3740*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 3.740");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (4020*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 4.020");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (6300*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA BERSUBSIDI                || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.300");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D1_3 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (6340*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.340");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (9200*pemakaian);
		printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.200");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (9600*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.600");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (6340*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.340");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (9200*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.200");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (9600*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.600");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D1_4 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");	
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (6420*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.420");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (9350*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.350");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (9650*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.650");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (6420*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.420");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (9350*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.350");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (9650*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.650");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D2_3 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (6490*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.490");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (9500*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.500");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (9800*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.800");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (6490*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.490");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (9500*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.500");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (9800*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.800");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D2_4 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (6570*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.570");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (9650*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : D2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.650");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (9950*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (6570*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.570");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (9650*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.650");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (9950*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D3_3 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (6640*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.640");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (9800*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : D3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.800");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (10100*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.100");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (6640*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.640");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (9800*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.800");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (10100*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.100");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D3_4 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (6720*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.720");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (9950*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : D3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (10250*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.250");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (6720*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.720");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (9950*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (10250*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.250");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D4_3 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (6790*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.790");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (10100*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : D4-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.100");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (10400*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : D4-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.400");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (6790*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.790");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (10100*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.100");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (10400*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.400");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D4_4 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (6870*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.870");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (10250*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : D4-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.250");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (10550*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : D4-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (6870*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.870");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (10250*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.250");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (10550*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D4-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D5_1 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (6940*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.940");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (10400*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : D5-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.400");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (10700*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : D5-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.700");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (6940*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 6.940");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (10400*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.400");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (10700*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.700");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D5_2 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (7020*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 7.020");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (10550*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : D5-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (10850*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : D5-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (7020*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 7.020");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (10550*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (10850*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D5_3 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (7090*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 7.090");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (10700*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : D5-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.700");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (11000*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : D5-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.000");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (7090*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 7.090");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (10700*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.700");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (11000*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.000");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int D5_4 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||              RUMAH TANGGA NON-SUBSIDI             ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_R + (7170*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 7.170");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_R + (10850*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : D5-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_R + (11150*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : D5-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_R + (7170*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 7.170");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_R + (10850*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_R + (11150*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||            RUMAH TANGGA NON-SUBSIDI               || ");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : D5-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_R);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}


int E1_1 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA KECIL                      ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (9200*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA KECIL                      ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1_1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.200");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (9850*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA KECIL                      ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E1_1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (10950*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (9200*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.200");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (9850*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (10950*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E1_2 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA KECIL                      ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (9500*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA KECIL                      ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1_2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.500");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (10150*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA KECIL                      ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E1_2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (11250*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E1-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.250");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (9500*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.500");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (10150*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (11250*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.250");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E1_3 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA KECIL                      ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (9800*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA KECIL                      ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1_3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.800");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (10450*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA KECIL                      ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E1_3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.450");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (11550*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E1-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (9800*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-3");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 9.800");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (10450*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.450");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (11550*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E1_4 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA KECIL                      ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (10100*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA KECIL                      ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1_4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.100");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (10750*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA KECIL                      ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E1_4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.750");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (11850*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (10100*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.100");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (10750*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.750");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (11850*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA KECIL                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E1-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E2_1 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA SEDANG                     ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (10400*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA SEDANG                     ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2_1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.400");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (11050*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA SEDANG                     ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E2_1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.050");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (12150*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (10400*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.400");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (11050*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.050");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (12150*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}


int E2_2 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA SEDANG                     ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (10700*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA SEDANG                     ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2_2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.700");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (11350*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA SEDANG                     ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E2_2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.350");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (12550*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (10700*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 10.700");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (11350*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.350");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (12550*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E2_3 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA SEDANG                     ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
	}

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (11000*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA SEDANG                     ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2_3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.000");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (11650*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA SEDANG                     ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E2_3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.650");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (13150*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 13.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (11000*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.000");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (11650*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.650");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (13150*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 13.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E2_4 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA SEDANG                     ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (11300*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA SEDANG                     ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2_4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.300");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (11950*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA SEDANG                     ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E2_4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (13950*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 13.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (11300*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.300");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (11950*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (13950*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA SEDANG                     ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E2-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 13.950");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E3_1 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA BESAR                      ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (11600*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA BESAR                      ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3_1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.600");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (12250*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA BESAR                      ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E3_1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.250");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (14750*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 14.750");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (11600*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.600");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (12250*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.250");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (14750*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-1 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 14.750");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E3_2 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA BESAR                      ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (11900*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA BESAR                      ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3_2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.900");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (12550*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA BESAR                      ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E3_2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (15050*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 15.050");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (11900*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 11.900");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (12550*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.550");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (15050*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-2 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 15.050");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E3_3 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA BESAR                      ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }

	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (12200*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA BESAR                      ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3_3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.200");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (12850*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA BESAR                      ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E3_3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (15850*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 15.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (12200*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.200");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (12850*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (15850*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-3 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 15.850");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}

int E3_4 (){
	int tanggal,rek;
	char ulang;
	float bulan_lalu, bulan_ini;
	char nama[50];
	
	system ("cls");
	printf("\n\t=======================================================");
    printf("\n\t||                  NIAGA BESAR                      ||");
    printf("\n\t=======================================================");
    printf("\n\t Masukkan nama pelanggan                           :");
    scanf("%s", &nama);
    printf("\n\t Masukkan nomor rek. PDAM                          :");
    while (scanf("%d", &rek)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t Masukan no rekening yang benar               :");
        while(rek=getchar() != '\n');
}
	printf("\n\t Masukkan tanggal pembayaran                       :");
    while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t    Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukkan tanggal pembayaran                    :");
        while(tanggal=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Bulan Sebelumnya (m^3)    :");
    while (scanf("%f", &bulan_lalu)==0 ){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t       Mohon input hanya berupa angka!        \n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian Sebelumnya (m^3)       :");
        while(bulan_lalu=getchar() != '\n');
    }
    printf("\n\t Masukan Besar Pemakaian Saat Ini (m^3)            :");
    while (scanf("%f", &bulan_ini)==0 || bulan_ini < bulan_lalu ){
		printf("\n\t---------------------------------------------------------------\n");
        printf("\n\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu! \n");
        printf("\n\t---------------------------------------------------------------\n");
        printf("\n\tMasukan Besar Pemakaian saat ini (m^3)         :");
        while(bulan_ini=getchar() != '\n');
    }


	system ("cls");
    float pemakaian = bulan_ini - bulan_lalu;

    float biayapemakaian,total;
    if (tanggal>=1 && tanggal <=15 && pemakaian>=0 && pemakaian <=10){
        biayapemakaian = adm + BPM_N + (12500*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA BESAR                      ||");
    	printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3_4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.500");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);

    }else if (tanggal >=1 && tanggal <=15 && pemakaian >= 11 && pemakaian <=20){
        biayapemakaian = adm + BPM_N + (13150*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
 		printf("\n\t=======================================================");
    	printf("\n\t||                  NIAGA BESAR                      ||");
    	printf("\n\t=======================================================");
		printf("\n\t GOLONGAN                   : E3_4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 13.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal>=1 && tanggal <=15 && pemakaian >20){
	biayapemakaian = adm + BPM_N + (16650*pemakaian);
        printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
     	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
    	printf("\n\t GOLONGAN                   : E3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. 0");
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 16.650");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", biayapemakaian);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >=0 && pemakaian <=10){
	biayapemakaian= adm + BPM_N + (12500*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 12.500");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp.%.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >= 11 && pemakaian <=20){
	biayapemakaian= adm + BPM_N + (13150*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 13.150");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}else if (tanggal >=16 && tanggal <=31 && pemakaian >20){
	biayapemakaian= adm + BPM_N + (16650*pemakaian);
	total = biayapemakaian + denda;
	
	    printf("\n\t========================================================");
        printf("\n\t||           T A G I H A N   P D A M                 ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
       	printf("\n\t||                  NIAGA BESAR                      ||");
        printf("\n\t=======================================================");
        printf("\n\t GOLONGAN                   : E3-4 ");
        printf("\n\t Nama                       : %s", nama);
        printf("\n\t no rek. PDAM               : %d", rek);
        printf("\n\t Jumlah pemakaian           : %.2f",pemakaian);
        printf("\n\t Tanggal pembayaran         : %d", tanggal);
        printf("\n\t Biaya Administrasi         : Rp. %d", adm);
        printf("\n\t Biaya pemeliharaan         : Rp. %d", BPM_N);
        printf("\n\t Biaya Denda                : Rp. %.f", denda);
        printf("\n\t Biaya tarif dasar(per m^3) : Rp. 16.650");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t TOTAL TAGIHAN = Rp %.2f", total);
}
	printf("\n\n\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit;   
}else {
	exit;
}
}
