//Program Menghitung Nilai UTS dan UAS
#include <iostream>
using namespace std;
main ()
{
	int NIM , NilaiUTSMKA1, NilaiUTSMKA2, NilaiUASMKA1, NilaiUASMKA2, RataRataNilaiUTS, RataRataNilaiUAS, JumlahMKAUTS, JumlahMKAUAS;
	
	cout<< "PROGRAM MENGHITUNG NILAI UTS dan UAS\n";
	cout<< "Masukkan Nama  = Muhammad Al Husain Syah\n";
	cout<< "Masukkan NIM   = "; cin>> NIM;
	cout<< "--------------------------------------------------\n";
	cout<< "NilaiUTSMKA1  = "; cin>> NilaiUTSMKA1;
	cout<< "NilaiUTSMKA2  = "; cin>> NilaiUTSMKA2;
	cout<< "JumlahMKAUTS  = "; cin>> JumlahMKAUTS;
	cout<< "NilaiUASMKA1  = "; cin>> NilaiUASMKA1;
	cout<< "NilaiUASMKA2  = "; cin>> NilaiUASMKA2;
	cout<< "JumlahMKAUAS  = "; cin>> JumlahMKAUAS;
	RataRataNilaiUTS = NilaiUTSMKA1 + NilaiUTSMKA2 / JumlahMKAUTS;
	RataRataNilaiUAS = NilaiUASMKA1 + NilaiUASMKA2 / JumlahMKAUAS;   
	cout<< "\nHASIL:\n";
	cout<< "RataRataNilaiUTS = " << RataRataNilaiUTS << endl;
	cout<< "RataRataNilaiUAS = " << RataRataNilaiUAS << endl;
	cout<< "---------------------------------------------------";
}

