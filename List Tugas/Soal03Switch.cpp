#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int PilihK;
	char Pilih;
	float Sisi, KelilingSegiempat, LuasSegiempat, LuasSegitiga, KelilingSegitiga, AlasSegitiga, TinggiSegitiga, Tinggi, Alas;
	cout << endl;
	cout << "MENU" <<endl;
	cout <<"~~~~~~" <<endl;
	cout << " A, Menghitung KUBUS" << endl;
	cout << " B, Menhitung Luas Lingkarang" << endl;
	cout << " C. Keluar Program" << endl;
	cout << endl;
	cout << "Pilih [A/B/C]  = " ; cin >> Pilih;
	cout<< endl;
	switch(Pilih)
	{
		case 'A':
		cout << "1. Isi Segiempat" << endl;
		cout << "2. Luas Segiempat" << endl;
		cout << "3. Keluar Program" << endl;
		cout << endl;
		cout << "Pilih [1/2/3] : " ; cin >> PilihK;
		switch (PilihK)
		{
			case 1 :
				cout << "Masukan Ukuran Sisi Segiempat  = " ; cin >> Sisi;
				KelilingSegiempat = 4 * Sisi;
				cout << "Keliling Segiempat  = " << KelilingSegiempat << endl; break;
			case 2 :
				cout << "Masukan Ukuran Sisi kubus  = " ; cin >> Sisi;
				LuasSegiempat = pow(Sisi,2);
				cout << " Luas Segiempat = " << LuasSegiempat << endl; break;
			default : cout << " ANDA KELUAR PROGRAM " << endl;
		}
		break;
		case 'B' :
		cout << "1. Luas Segitiga" << endl;
		cout << "2. Keliling Segitiga" << endl;
		cout << "3. Keluar Program" << endl;
		cout << endl;
		cout << "Pilih [1/2/3] : " ; cin >> PilihK;
		cout <<endl;
		switch (PilihK)
		{
			case 1 :
				cout << " Tinggi Segitiga = " ;cin >> Tinggi;
				cout << " Alas Segitiga = " ;cin >> Alas;
				LuasSegitiga = 0.5 * Tinggi * Alas;
				cout << "Luas Segitiga  = " << LuasSegitiga << endl; break;
			case 2 :
				cout << " Sisi Segitiga = " ;cin >> Sisi;
				KelilingSegitiga = Sisi * 3;
				cout << "Keliling Segitiga = " << KelilingSegitiga << endl; break;
		default: cout <<"ANDA KELUAR PROGRAM " << endl;
		}
		break;
		default:
			cout << "ANDA KELUAR PROGRAM "  << endl; break;
	}
cin.get();
}