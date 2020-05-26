#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

typedef struct {
	int tahun;
	int bulan;
	int tanggal;
} data_tanggal;

data_tanggal TanggalLahir() {
	data_tanggal tgl;
	tgl.tahun = 1789;
	tgl.bulan = 3;
	tgl.tanggal = 21;
	return tgl;
}

int main() {
	cout << "=================================" << endl;
	cout << "Struct Sebagai Nilai Balik Fungsi" << endl;
	cout << "=================================" << endl;

	data_tanggal Tanggal;
	Tanggal = TanggalLahir();
	
	cout << "Tanggal Lahir  = " << Tanggal.tanggal << " - " << Tanggal.bulan << " - " << Tanggal.tahun << endl << endl;
	_getch();
	return 0;
}