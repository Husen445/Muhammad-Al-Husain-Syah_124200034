//Program Menghitung Rata-Rata Nilai UTS dan UAS
#include <iostream>
using namespace std;
main ()
{
	int NIM , NilaiUTS, NilaiUAS, RataRataNilai;
	
	cout<< "PROGRAM MENGHITUNG NILAI UTS dan UAS\n";
	cout<< "Masukkan Nama  = Muhammad Al Husain Syah\n";
	cout<< "Masukkan NIM   = "; cin>> NIM;
	cout<< "--------------------------------------------------\n";
	cout<< "NilaiUTS  = "; cin>> NilaiUTS;
	cout<< "NilaiUAS  = "; cin>> NilaiUAS;
	RataRataNilai = (NilaiUTS + NilaiUAS)/ 2;  
	cout<< "\nHASIL:\n";
	cout<< "RataRataNilai = " << RataRataNilai << endl;
	cout<< "---------------------------------------------------";
}