/*Program tugas metode numerik
nama : Didin Wahyudi
nim  : 3411151066
kelas: SIE-B
*/


//Preprosessor
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

//Deklarasi
	int x, y, a, b, i; 
	int menu;
	float hasil;
   	
//Fungsi	      	
int tambah(int x,int y){
	hasil=x+y;
	return(hasil);
}

int kurang(int x,int y){
	hasil=x-y;
	return(hasil);
}

int kali(int x,int y){
	hasil=x*y;
	return(hasil);
}

int pangkat(int x,int y){
	hasil=pow(x,y);
	return(hasil);
}

//main program
int main(){
	
menu:
printf("\n");
printf("\t------TUGAS METODE NUMERIK------\n\n");
printf("\t---SISTEM OPERASI PERHITUNGAN---\n\n");
printf("\t1. MENGHITUNG PENJUMLAHAN\n");
printf("\t2. MENGHITUNG PENGURANGAN\n");
printf("\t3. MENGHITUNG PERKALIAN\n");
printf("\t4. MENGHITUNG PANGKAT\n");
printf("\t5. MENGHITUNG FUNGSI\n");
printf("\n\n\tPILIH MENU ? "); scanf("%s",&menu);
system("cls");


	switch(menu){

	case '1':
		printf("\n");
		printf("\t---SISTEM OPERASI PERHITUNGAN---\n\n");
		printf("\t----------PENJUMLAHAN-----------\n\n");
		printf("\tMASUKAN NILAI X : ");scanf("%d",&x);
		printf("\tMASUKAN NILAI Y : ");scanf("%d",&y);
		printf("\n\tHASIL X + Y = %d",tambah(x,y));
		printf("\n");
		getch();
		system("cls");
		goto menu;
	break;

	case '2':
		printf("\n");
		printf("\t---SISTEM OPERASI PERHITUNGAN---\n\n");
		printf("\t----------PENGURANGAN-----------\n\n");
		printf("\tMASUKAN NILAI X : ");scanf("%d",&x);
		printf("\tMASUKAN NILAI Y : ");scanf("%d",&y);
		printf("\n\tHASIL X - Y = %d",kurang(x,y));
		printf("\n");
		getch();
		system("cls");
		goto menu;
	break;
	
	case '3':
		printf("\n");
		printf("\t---SISTEM OPERASI PERHITUNGAN---\n\n");
		printf("\t-----------PERKALIAN------------\n\n");
		printf("\tMASUKAN NILAI X : ");scanf("%d",&x);
		printf("\tMASUKAN NILAI Y : ");scanf("%d",&y);
		printf("\n\tHASIL X * Y = %d",kali(x,y));
		printf("\n");
		getch();
		system("cls");
		goto menu;
	break;
	
	case '4':
		printf("\n");
		printf("\t---SISTEM OPERASI PERHITUNGAN---\n\n");
		printf("\t------------PANGKAT-------------\n\n");
		printf("\tMASUKAN NILAI X : ");scanf("%d",&x);
		printf("\tMASUKAN NILAI Y : ");scanf("%d",&y);
		printf("\n\tHASIL X ^ Y = %d",pangkat(x,y));
		printf("\n");
		getch();
		system("cls");
		goto menu;
	break;
	
	case '5':
		printf("\n");
		printf("\t---SISTEM OPERASI PERHITUNGAN---\n\n");
		printf("\t-------------FUNGSI-------------\n\n");
		printf("\t         f(x)=3x^2+x-1          \n\n");
		printf("\tMASUKAN NILAI A : ");scanf("%d",&a);
		printf("\tMASUKAN NILAI B : ");scanf("%d",&b);
		printf("\n\tHASIL FUNGSI f(x)=3x^2+x-1 = \n");
		printf("\tDIMANA NILAI A<=x<=B\n");
		printf("\t--------------------------------\n");
			for(a=a;a<=b;a++){
        		i = (3*(a*a))+a-1;
    			printf("\n\tJIKA NILAI X = %d", a);
				printf("\n\tMAKA HASILNYA ADALAH = %d",i);
				printf("\n\n\t--------------------------------\n");	
			}		
		printf("\n");
		getch();
		system("cls");
		goto menu;
	break;
	
	default : 	printf("\n\n\tPILIHAN SALAH, MOHON COBA LAGI !");
				printf("\n\n\t--------------------------------\n");
	goto menu;
   }
}
