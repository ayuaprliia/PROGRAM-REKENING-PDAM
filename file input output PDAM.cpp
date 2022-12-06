#include <stdio.h>     
#include <stdlib.h>     
#include <string.h>  
#include <time.h>     

#define biayaAdmin          5000.00         
#define dendaRT             8000.00        
#define dendaUsaha         10000.00        
#define BPMRT              1000.00         
#define BPMU               2000.00       
#define jatuhtempo          21          
#define maks                20         

float validasiFloat(float *var); 
void validasiInput(float *var); 
void validasiNegatif(float *var);
    
void validasiMenu(float *var, int batas1, int batas2);
void menu_utama(); 
void registrasi(); 
void admin(); 
void menu_admin();
void kelompok(); 
void regisRTSubsidi(); 
void regisRTNonSubsidi();
void regisUsaha();
void inputPemakaian(); 
void tagihan(); 
void hapusStrukPembayaran(); 
void riwayatStrukPembayaran();
void keluar(); void cetakStruk();


char nama[maks][50]; char alamat[maks][50];  char rekening[maks][50]; char golongan[maks][10];
float biaya1[maks]; float biaya2[maks]; float biaya3[maks]; float denda[maks]; float BPM[maks];

char username[20]; char password[10]; char namaAdmin[50];

float  bulan_lalu[maks], bulan_ini[maks], totalpakai[maks],
     biayapakai[maks], totalBiaya[maks], Denda;



int i=0;
int main()
{
    while(i<maks) {
        system("cls");
        menu_utama();
        float pilih;
        printf("\t\t==========================================================================\n");
        printf("\t\t|-----------------------------------------------------------------------||\n");
        printf("\t\t||                                                                      ||\n");
        printf("\t\t||                       TRANSAKSI SUDAH SELESAI                        ||\n");
        printf("\t\t||                                                                      ||\n");
        printf("\t\t||----------------------------------------------------------------------||\n");
        printf("\t\t|| [1] kembali ke menu utama                                            ||\n");
        printf("\t\t|| [2] lihat Tagihan                                                    ||\n");
        printf("\t\t||----------------------------------------------------------------------||\n");
        printf("\t\t==========================================================================\n");
        printf("\n\t\t Masukkan pilihan Anda : ");
        validasiMenu(&pilih, 1, 2);
        if(pilih==1) i++;
        else if(pilih==2) {
            break;
        }
    }
    system("cls");
    tagihan();
    printf("\n");
    system ("pause");
    keluar();
    return 0;
}


void menu_utama()
{
	system ("cls");
    float pilih = 0;
    printf("\t\t =========================================================================\n");
    printf("\t\t||----------------------------------------------------------------------||\n");
    printf("\t\t||                  PEMBAYARAN PEMAKAIAN AIR PDAM                       ||\n");
    printf("\t\t|| -------------------------------------------------------------------- ||\n");
    printf("\t\t|| ==================================================================== ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| [1] Pembayaran air bulan ini                                         ||\n");
    printf("\t\t|| [2] Log in admin                                                     ||\n");
    printf("\t\t|| [3] Keluar                                                           ||\n");
    printf("\t\t||----------------------------------------------------------------------||\n");
    printf("\t\t ========================================================================= \n");
    printf("\n\t\t Pilih menu yang diinginkan: ");
    validasiMenu(&pilih, 1, 3);
    if(pilih==1){
        system("cls");
        registrasi();
    } else if(pilih==2){
        system("cls");
        admin();
    } else if(pilih==3){
        system("cls");
        keluar();
    }
}


void admin()
{
char username [15];
	char password [8];
	
	system ("cls");
	printf("\n\t==============================================================");
	printf("\n\t||               S E L A M A T  D A T A N G                 ||");
	printf("\n\t``````````````````````````````````````````````````````````````");
	printf("\n\t||            SILAHKAH LOG IN TERLEBIH DAHULU               ||");
	printf("\n\t||============================================================\n");
	printf("\n\t  Masukkan username     :");
	scanf("%s", username);
	printf("\n\t  Masukkan password     :");
	fflush(stdin);
	scanf("%s", password);
	if ((strcmp(username, "admin") == 0) && (strcmp(password, "pdam") ==0)){
		menu_admin();
		
	}else {
		printf("\n\t  PASSWORD atau USERNAME SALAH!\n");
		system ("pause");
		menu_utama();
	}
}

void menu_admin()
{
	system ("cls");
    float pilih = 0;
    printf("\t\t =========================================================================\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                             MENU ADMIN                               ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||--------------------------------------------------------------------- ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|| [1] Lihat riwayat pembayaran                                         ||\n");
    printf("\t\t|| [2] Hapus riwayat pembayaran                                         ||\n");
    printf("\t\t|| [3] Kembali ke menu utama                                            ||\n");
    printf("\t\t|| [4] Keluar                                                           ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t ========================================================================= \n");
    printf("\n\t\t Pilih menu yang diinginkan: ");
    validasiMenu(&pilih, 1, 3);
    if(pilih==1){
        system("cls");
        riwayatStrukPembayaran();
    } else if(pilih==2){
        system("cls");
        hapusStrukPembayaran();
    } else if(pilih==3){
        system("cls");
        menu_utama();
    } else if(pilih==4){
        system("cls");
        keluar();
    }
}


void registrasi()
{
    float pilih;
    printf("\t\t =========================================================================\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||               I N F O R M A S I  P E L A N G G A N                   ||\n");
    printf("\t\t||______________________________________________________________________||\n");
    printf("\t\t||                Silahkan isi informasi pelanggan                      ||\n");
    printf("\t\t ========================================================================= \n");
    printf("\n\t\t Nama             : ");
    fgets(nama[i], sizeof(nama[i]), stdin);
    printf("\t\t Alamat           : ");
    fgets(alamat[i], sizeof(alamat[i]), stdin);
    printf("\t\t No Rekening air  :");
      fgets(rekening[i], sizeof(rekening[i]), stdin);
    
 kelompok();
 
}

void kelompok()
{
    float pilih;
    system ("cls");
   	printf("\n\t==================================================");
    printf("\n\t||        PEMBAYARAN PEMAKAIAN AIR PDAM         ||");
    printf("\n\t||----------------------------------------------||");
    printf("\n\t||     K E L O M P O K  P E L A N G G A N       ||");
    printf("\n\t||----------------------------------------------||");
    printf("\n\t|| [1] Rumah Tangga Bersubsidi                  ||");                           
    printf("\n\t|| [2] Rumah Tangga Non Subsidi                 ||");
    printf("\n\t|| [3] Niaga                                    ||");
    printf("\n\t|| [4] Kembali ke menu utama                    ||");
	printf("\n\t==================================================");
    printf("\n\t Masukkan pilihan anda [1][2][3][4] : ");
    validasiMenu(&pilih, 1, 4);
    if(pilih==1){
        system("cls");
        regisRTSubsidi();
    }else if(pilih==2){
        system("cls");
        regisRTNonSubsidi();
    }else if(pilih==3){
        system("cls");
        regisUsaha();
    }else if(pilih==4){
        system("cls");
        menu_utama();
    }
}


void regisRTSubsidi()
{
    float pilih = 0;
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
    printf("\n\t||----------------------------------------------------------------------||");
    printf("\n\t||  [9] |               Kembali                                         ||");
	printf("\n\t==========================================================================");
	printf("\n\t Masukkan pilihan anda [1][2][3][4][5][6][7][8][9] : ");
    validasiMenu(&pilih, 1, 9);
    if(1<= pilih && pilih <= 8) {
    if(pilih==1){
        strcpy(golongan[i], "D1-1"); biaya1[i] = 1780; biaya2[i] = 2060; biaya3[i] = 5880;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }else if(pilih==2){
        strcpy(golongan[i], "D1-2"); biaya1[i] = 2060; biaya2[i] = 2340; biaya3[i] = 5940;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }else if(pilih==3){
        strcpy(golongan[i], "D2-1"); biaya1[i] = 2340; biaya2[i] = 2620; biaya3[i] = 6000;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }else if(pilih==4){
        strcpy(golongan[i], "D2-2"); biaya1[i] = 2620; biaya2[i] = 2900; biaya3[i] = 6060;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }else if(pilih==5){
        strcpy(golongan[i], "D3-1"); biaya1[i] = 2900; biaya2[i] = 3180; biaya3[i] = 6120;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }else if(pilih==6){
        strcpy(golongan[i], "D3-2"); biaya1[i] = 3180; biaya2[i] = 3460; biaya3[i] = 6180;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }else if(pilih==7){
        strcpy(golongan[i], "D4-1"); biaya1[i] = 3460; biaya2[i] = 3740; biaya3[i] = 6240;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }else if(pilih==8){
        strcpy(golongan[i], "D4-2"); biaya1[i] = 3740; biaya2[i] = 4020; biaya3[i] = 6300;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }
        system("cls");
        inputPemakaian();
    }else if(pilih==9){
        system("cls");
        kelompok();
    }
}


void regisRTNonSubsidi()
{
    float pilih;
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
    printf("\n\t||---------------------------------------------------------------------------||");
    printf("\n\t||  [13]|Kembali                                                             ||");
	printf("\n\t===============================================================================");
	printf("\n\t Masukkan pilihan anda [1][2][3][4][5][6][7][8][9][10][11][12][13] : ");
    validasiMenu(&pilih, 1, 13);
    if(1<= pilih && pilih <= 12) {
     if(pilih==1){
        strcpy(golongan[i], "D1-3"); biaya1[i] = 6340; biaya2[i] = 9200; biaya3[i] = 9600;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }else if(pilih==2){
        strcpy(golongan[i], "D1-4"); biaya1[i] = 6420; biaya2[i] = 9350; biaya3[i] = 9650;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }else if(pilih==3){
        strcpy(golongan[i], "D2-3"); biaya1[i] = 6490; biaya2[i] = 9500; biaya3[i] = 9800;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    } else if(pilih==4) {
        strcpy(golongan[i], "D2-4"); biaya1[i] = 6570; biaya2[i] = 9650; biaya3[i] = 9950;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    } else if(pilih==5) {
        strcpy(golongan[i], "D3-3"); biaya1[i] = 6640; biaya2[i] = 9800; biaya3[i] = 10100;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    } else if(pilih==6) {
        strcpy(golongan[i], "D3-4"); biaya1[i] = 6720; biaya2[i] = 9950; biaya3[i] = 10250;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    } else if(pilih==7){
        strcpy(golongan[i], "D4-3"); biaya1[i] = 6790; biaya2[i] = 10100; biaya3[i] = 10400;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    } else if(pilih==8) {
        strcpy(golongan[i], "D4-4"); biaya1[i] = 6870; biaya2[i] = 10250; biaya3[i] = 10550;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    } else if(pilih==9) {
        strcpy(golongan[i], "D5-1"); biaya1[i] = 6940; biaya2[i] = 10400; biaya3[i] = 10700;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    } else if(pilih==10) {
        strcpy(golongan[i], "D5-2"); biaya1[i] = 7020; biaya2[i] = 10550; biaya3[i] = 10850;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    } else if(pilih==11) {
        strcpy(golongan[i], "D5-3"); biaya1[i] = 7090; biaya2[i] = 10700; biaya3[i] = 11000;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    } else if(pilih==12) {
        strcpy(golongan[i], "D5-4"); biaya1[i] = 7170; biaya2[i] = 10850; biaya3[i] = 11150;
        denda[i] = dendaRT; BPM[i] = BPMRT;
    }
        system("cls");
        inputPemakaian();
    } else if(pilih==13) {
        system("cls");
        kelompok();
    }
}


void regisUsaha()
{
    float pilih = 0;
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
    printf("\n\t||----------------------------------------------------------------------------------------------------------||");
    printf("\n\t|| [13]|Kembali                                                                                             ||");
	printf("\n\t==============================================================================================================");
	printf("\n\t Masukkan pilihan anda [1][2][3][4][5][6][7][8][9][10][11][12][13]: ");
    validasiMenu(&pilih, 1, 13);
    if(1<= pilih && pilih <= 12) {
     if(pilih==1) {
        strcpy(golongan[i], "E1-1"); biaya1[i] = 9200; biaya2[i] = 9850; biaya3[i] = 10950;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==2) {
        strcpy(golongan[i], "E1-2"); biaya1[i] = 9500; biaya2[i] = 10150; biaya3[i] = 11250;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==3) {
        strcpy(golongan[i], "E1-3"); biaya1[i] = 9800; biaya2[i] = 10450; biaya3[i] = 11550;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==4) {
        strcpy(golongan[i], "Egolongan1-4"); biaya1[i] = 10100; biaya2[i] = 10750; biaya3[i] = 11850;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==5) {
        strcpy(golongan[i], "E2-1"); biaya1[i] = 10400; biaya2[i] = 11050; biaya3[i] = 12150;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==6) {
        strcpy(golongan[i], "E2-2"); biaya1[i] = 10700; biaya2[i] = 11350; biaya3[i] = 12550;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==7) {
        strcpy(golongan[i], "E2-3"); biaya1[i] = 11000; biaya2[i] = 11650; biaya3[i] = 13150;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==8) {
        strcpy(golongan[i], "E2-4"); biaya1[i] = 11300; biaya2[i] = 11950; biaya3[i] = 13950;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==9) {
        strcpy(golongan[i], "E3-1"); biaya1[i] = 11600; biaya2[i] = 12250; biaya3[i] = 14750;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==10) {
        strcpy(golongan[i], "E3-2"); biaya1[i] = 11900; biaya2[i] = 12550; biaya3[i] = 15050;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==11){
        strcpy(golongan[i], "E3-3"); biaya1[i] = 12200; biaya2[i] = 12850; biaya3[i] = 15850;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } else if(pilih==12){
        strcpy(golongan[i], "E3-4"); biaya1[i] = 12500; biaya2[i] = 13150; biaya3[i] = 16650;
        denda[i] = dendaUsaha; BPM[i] = BPMU;
    } system("cls");
      inputPemakaian();
    } else if(pilih==13){
        system("cls");
        kelompok();
    }
}


void inputPemakaian()
{
    printf("\t\t =========================================================================\n");
    printf("\t\t||----------------------------------------------------------------------||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||                   I N P U T  P E M A K A I A N                       ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||----------------------------------------------------------------------||\n");
    printf("\t\t =========================================================================\n");
    printf("\t\t  Pemakaian (Stand) air bulan lalu (m^3)                      : ");
    validasiNegatif(&bulan_lalu[i]);
    printf("\t\t  Pemakaian (Stand) air bulan ini (m^3)                       : ");
    validasiNegatif(&bulan_ini[i]);

    while (bulan_lalu[i] > bulan_ini[i]){
        printf("\n\t\t Jumlah pemakaian bulan ini harus lebih besar dari bulan lalu!\n");
        printf("\t\t  Pemakaian (Stand) air bulan lalu (m^3)                  : ");
        validasiNegatif(&bulan_lalu[i]);
        printf("\t\t  Pemakaian (Stand) air bula  ini (m^3)                   : ");
        validasiNegatif(&bulan_ini[i]);
    }

    totalpakai[i] = bulan_ini[i] - bulan_lalu[i];
    if (totalpakai[i] <= 10) {
        biayapakai[i] = totalpakai[i]*biaya1[i];
    } else if (11 <= totalpakai[i] && totalpakai[i] <= 20) {
        biayapakai[i] = totalpakai[i]*biaya2[i];
    } else if ( totalpakai[i] > 20) {
        biayapakai[i] = totalpakai[i]*biaya3[i];}

    time_t paymenttime;
    paymenttime = time(NULL);
    struct tm tm = *localtime(&paymenttime);


    if ((tm.tm_mday - jatuhtempo) <= 0) {
         Denda = 0;
    } else {
         Denda = denda[i];}

    totalBiaya[i] = biayapakai[i] + BPM[i] + biayaAdmin + Denda;
    system("cls");
}


void tagihan()
{
    time_t paymenttime;
    paymenttime = time(NULL);
    struct tm tm = *localtime(&paymenttime);
    float biayaKeseluruhan;
        printf("\t\t =========================================================================\n");
        printf("\t\t||----------------------------------------------------------------------||\n");
        printf("\t\t||                                                                      ||\n");
        printf("\t\t||                      T A G I H A N  P D A M                          ||\n");
        printf("\t\t||                                                                      ||\n");
    	for(int j = 0 ; j <= i ; j++){
        printf("\t\t|| ---------------------------------------------------------------------||\n");
        printf("\t\t||                                                                      ||\n");
        printf("\t\t||   Nama Pelanggan   : %s ", nama[j]);
        printf("\t\t||   Alamat           : %s ", alamat[j]);
        printf("\t\t||   No Rekening Air  : %d ", rekening[j]);                  
        printf("\n\t\t--------------------------------------------------------------------------\n"); 
        printf("\t\t||                           RINCIAN PEMAKAIAN                          ||\n ");
        printf("\t\t||                                                                      ||\n");
        printf("\t\t||   Golongan           : %s ", golongan[j]);
        printf("\n\t\t||   Total Pemakaian    : %.2f m3\n", totalpakai[j]);
        printf("\t\t||   Tanggal transaksi  : %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
        printf("\t\t||   Jatuh Tempo        : %d-%d-%d\n", jatuhtempo, tm.tm_mon+1, tm.tm_year+1900);
        printf("\t\t||   Biaya Pemakaian    : Rp%.2f \n", biayapakai[j]);
        printf("\t\t||   Biaya Administrasi : Rp%.2f \n", biayaAdmin);
        printf("\t\t||   Biaya Pemeliharaan : Rp%.2f \n", BPM[j]);
        printf("\t\t||   Denda              : Rp%.2f \n", Denda);
        printf("\t\t|| ------------------------------------------------------------------------   \n");
        printf("\t\t||   Total Biaya        : Rp%.2f \n", totalBiaya[j]);
        printf("\t\t==============================================================================");
        biayaKeseluruhan = biayaKeseluruhan + totalBiaya[j];
    }
    cetakStruk();
}



void cetakStruk()
{
    time_t waktuPembayaran;
    waktuPembayaran = time(NULL);
    struct tm tm = *localtime(&waktuPembayaran);

    FILE *struk;

    struk = fopen("strukPembayaran.txt", "a");
    if (struk == NULL);

    float biayaKeseluruhan;
        fprintf(struk, "\t\t =========================================================================\n");
        fprintf(struk, "\t\t||----------------------------------------------------------------------||\n");
        fprintf(struk, "\t\t||                                                                      ||\n");
        fprintf(struk, "\t\t||                      T A G I H A N  P D A M                          ||\n");
        fprintf(struk, "\t\t||                                                                      ||\n");
    	for(int j = 0 ; j <= i ; j++){
        fprintf(struk, "\t\t|| ---------------------------------------------------------------------||\n");
        fprintf(struk, "\t\t||                                                                      ||\n");
        fprintf(struk, "\t\t||   Nama Pelanggan   : %s ", nama[j]);
        fprintf(struk, "\t\t||   Alamat           : %s ", alamat[j]);
        fprintf(struk, "\t\t||   No Rekening Air  : %d ", rekening[j]);                  
        fprintf(struk, "\n\t\t--------------------------------------------------------------------------\n"); 
        fprintf(struk, "\t\t||                           RINCIAN PEMAKAIAN                          ||\n");
        fprintf(struk, "\t\t||                                                                      ||\n");
        fprintf(struk, "\t\t||   Golongan           : %s ", golongan[j]);
        fprintf(struk, "\n\t\t||   Total Pemakaian    : %.2f m3\n", totalpakai[j]);
        fprintf(struk, "\t\t||   Tanggal transaksi  : %d-%d-%d\n", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
        fprintf(struk, "\t\t||   Jatuh Tempo        : %d-%d-%d\n", jatuhtempo, tm.tm_mon+1, tm.tm_year+1900);
        fprintf(struk, "\t\t||   Biaya Pemakaian    : Rp%.2f \n", biayapakai[j]);
        fprintf(struk, "\t\t||   Biaya Administrasi : Rp%.2f \n", biayaAdmin);
        fprintf(struk, "\t\t||   Biaya Pemeliharaan : Rp%.2f \n", BPM[j]);
        fprintf(struk, "\t\t||   Denda              : Rp%.2f \n", Denda);
        fprintf(struk, "\t\t|| ------------------------------------------------------------------------   \n");
        fprintf(struk, "\t\t||   Total Bayar        : Rp%.2f \n", totalBiaya[j]);
        fprintf(struk, "\t\t===========================================================================");
        biayaKeseluruhan = biayaKeseluruhan + totalBiaya[j];;
    }
 
    fclose(struk);
}


void keluar()
{
    system("cls");
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
		exit(0);
}


float validasiFloat(float *var)
{
    fflush(stdin);
    char buffer[1024];
    char cek;
    if(fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        if(sscanf(buffer, "%f %c", var, &cek) == 1)
        return *var;
    }
    return 0;
}


void validasiInput(float *var)
{
    while (1)
    {
      fflush(stdin);
      if (validasiFloat(var))
        break;
      printf("\t\t input hanya berupa angka!\n");
      printf("\t\t Masukkan input: ");
    }
}

void validasiNegatif(float *var)
{
    while (1)
    {
      validasiInput(var);
      fflush(stdin);
      if (*var > 0)
        break;
      printf("\t\t Masukan salah. Mohon masukkan input sesuai arahan.\n");
      printf("\t\t Masukkan input: ");
    }
}


void validasiMenu(float *var, int batas1, int batas2)
{
    while (1)
    {
      validasiInput(var);
      fflush(stdin);
      if (batas1 <= *var && *var <= batas2)
        break;
      printf("\t\t Masukan salah. Mohon masukkan input sesuai arahan.\n");
      printf("\t\t Masukkan input: ");
    }
}


void hapusStrukPembayaran()
{
    float pilMenu;
    printf("\t\t ________________________________________________________________________\n");
    printf("\t\t|+______________________________________________________________________+|\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t||          Apakah Anda yakin ingin menghapus riwayat pembayaran?       ||\n");
    printf("\t\t||               Tekan [1] untuk YA dan [2] untuk TIDAK                 ||\n");
    printf("\t\t||                                                                      ||\n");
    printf("\t\t|+______________________________________________________________________+|\n");
    printf("\t\t ________________________________________________________________________ \n");
    printf("\t\t ");
    validasiMenu(&pilMenu, 1, 2);
    if(pilMenu == 1){
        FILE *riwayat;

        riwayat = fopen("strukPembayaran.txt", "w");
        if(riwayat == NULL);
        fclose(riwayat);

        printf("\t\t ________________________________________________________________________\n");
        printf("\t\t|+______________________________________________________________________+|\n");
        printf("\t\t||                                                                      ||\n");
        printf("\t\t||                       RIWAYAT PEMBAYARAN TELAH DIHAPUS               ||\n");
        printf("\t\t||            Tekan ENTER untuk kembali ke menu administrator.          ||\n");
        printf("\t\t||                                                                      ||\n");
        printf("\t\t|+______________________________________________________________________+|\n");
        printf("\t\t ________________________________________________________________________ \n");
        printf("\t\t ");
        getchar();
        system("cls");
        menu_admin();
    } else if(pilMenu==2){
        system("cls");
        menu_admin();
    }
}


void riwayatStrukPembayaran()
{
    FILE *riwayat;

    riwayat = fopen("strukPembayaran.txt", "r");

    char *teks;
    long numbytes;

    if(riwayat == NULL);

    fseek(riwayat, 0L, SEEK_END);
    numbytes = ftell(riwayat);
    fseek(riwayat, 0L, SEEK_SET);

    teks = (char*)calloc(numbytes, sizeof(char));
    if(teks == NULL);

    fread(teks, sizeof(char), numbytes, riwayat);
    fclose(riwayat);

    printf("%s", teks);

    printf("\t\t  Tekan ENTER untuk melanjutkan.\n");
    printf("\t\t ");
    getchar();
    system("cls");
    menu_admin();
}



