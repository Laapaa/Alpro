#include<iostream>
using namespace std;
int opmat09(); 
int opmat09_2();
int opmat09_3();
int opmat09_4();

int main()
{
	int agus;
	cout << "Menu Menghitung Luas dan Keliling" << endl;
	cout << "    Dari Berbagai Bangun Ruang   " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " 1. Lingkaran" << endl;
	cout << " 2. Persegi  " << endl;
	cout << " 3. Persegi Panjang" << endl;
	cout << " 4. Segitiga" << endl;
	cout << "Pilih Menu yang Anda Inginkan : "; cin >> agus;
	switch(agus)
	{
		case 1:
		opmat09();
		break;
		case 2:
		opmat09_2();
		break;
		case 3:
		opmat09_3();
		break;
		case 4:
		opmat09_4();
		break;
		default:
		cout << "Angka yang anda input melebihi 4 atau bukan angka";
	}
	cin.get();
}

int opmat09()
{
	float wah = 3.14;
 	float yu; 
 	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
 	cout << "Keliling dan Luas Lingkaran" << endl;
 	cout << "Masukkan Nilai Jari-Jari Lingkaran : "; cin >> yu;
	float wahyu = wah * yu * yu;
	cout << "Nilai dari Luas Lingkaran  : " << wahyu << endl;
	float pra = wah * 2 * yu;
	cout << "Nilai dari Keliling Lingkaran : " << pra << endl;
} 

int opmat09_2()
{
	int ags;
	int why;
	int pra;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Keliling dan Luas Persegi" << endl;
	cout << "Masukkan Nilai Sisi : "; cin >> ags;
	why = ags*ags;
	cout << "Nilai dari Luas Persegi : " << why << endl;
	pra = ags*4;
	cout << "Nilai dari Keliling Persegi : " << pra << endl;	
}

int opmat09_3()
{
	int agus_2;
	int wahyu;
	int ags_1;
	int ags_2;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Keliling dan Luas Persegi Panjang" << endl;
	cout << "Masukkan Nilai Panjang : "; cin >> agus_2;
	cout << "Masukkan Nilai Lebar   : "; cin >> wahyu;
	ags_1 = agus_2 * wahyu;
	cout << "Hasil dari Luas Persegi Panjang : " << ags_1 << endl;
	ags_2 = 2*(agus_2 + wahyu);
	cout << "Hasil dari Keliling Persegi Panjang : " << ags_2 << endl;
}

int opmat09_4()
{
	int ags_3;
	int ags_4;
	int why_1;
	int why_2;
	int awp_1;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Keliling dan Luas Segitiga" << endl;
	cout << "Masukkan Nilai Alas   : "; cin >> ags_3;
	cout << "Masukkan Nilai Tinggi : "; cin >> ags_4;
	cout << "Masukkan Nilai Sisi   : "; cin >> awp_1;
	why_1 = 0.5*ags_3*ags_4;
	cout << "Hasil dari Luas Segitiga : " << why_1 << endl;
	why_2 = awp_1*3;
	cout << "Hasil dari Keliling Segitiga : " << why_2 << endl; 
}
