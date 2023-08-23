#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int PilihK;
	char Pilih;
	float TypeA,TypeB,TypeC,DiskonA,DiskonB,DiskonC,jmlhdisk,Bayar,Ttlbyr;
	cout << endl;
	cout << "MENU" <<endl;
	cout <<"~~~~~~" <<endl;
	cout << " A. Jenis Belanja Type A " << endl;
	cout << " B. Jenis Belanja Type B" << endl;
	cout << " C. Jenis Belanja Type C" << endl;
	cout << endl;
	cout << "Pilih [A/B/C]  = " ; cin >> Pilih;
	cout<< endl;
	switch(Pilih)
	{
		case 'A':
		cout << "1. Jumlah Diskon Yang di dapatkan" << endl;
		cout << "2. Jumlah Total Bayar" << endl;
		cout << "3. Jumlah Diskon dan Total Bayar" << endl;
		cout << endl;
		cout << "Pilih [1/2/3] : " ; cin >> PilihK;
		switch (PilihK)
		{
			case 1 :
				cout << "Diskon Yang Akan Di Dapatkan Adalah = 10% " << endl; break;
				cout << endl; break;
			case 2 :
				cout << "Masukan Harga Type A  = " ; cin >>TypeA ;
				DiskonA = TypeA * 10 / 100;
				Ttlbyr = TypeA - DiskonA;
				cout << " Total yang harus anda bayar adalah = " << Ttlbyr << endl;
			case 3 :
				cout << "Masukan Harga Type A  = " ; cin >>TypeA;
				DiskonA = TypeA * 10 / 100;
				Ttlbyr = TypeA - DiskonA;
				cout << "Diskon yang anda dapatkan adalah 10% dan anda harus membayar sebanyak = " << Ttlbyr << endl; break;
			default : cout << " ANDA KELUAR PROGRAM " << endl;
		}
		break;
		case 'B' :
		cout << "1. Jumlah Diskon" << endl;
		cout << "2. Jumlah Total Bayar" << endl;
		cout << "3. Jumlah Total Bayar dan Diskon" << endl;
		cout << endl;
		cout << "Pilih [1/2/3] : " ; cin >> PilihK;
		cout <<endl;
		switch (PilihK)
		{
			case 1 :
				cout << "Diskon Yang Akan Di Dapatkan Adalah = 15% " << endl; break;
				cout << endl; break;
			case 2 :
				cout << "Masukan Harga Type B  = " ; cin >>TypeB ;
				DiskonA = TypeB * 15 / 100;
				Ttlbyr = TypeB - DiskonA;
				cout << " Total yang harus anda bayar adalah = " << Ttlbyr << endl;
			case 3 :
				cout << "Masukan Harga Type B  = " ; cin >>TypeB;
				DiskonB = TypeB * 15 / 100;
				Ttlbyr = TypeB - DiskonB;
				cout << "Diskon yang anda dapatkan = 15%,Harga Setelah di diskon = " << Ttlbyr << endl; break;
			default : cout << " ANDA KELUAR PROGRAM " << endl;
		}
		break;
		case 'C' :
		cout << "1. Jumlah Diskon" << endl;
		cout << "2. Jumlah Total Bayar" << endl;
		cout << "3. Jumlah DIskon Dan Total Bayar" << endl;
		cout << endl;
		cout << "Pilih [1/2/3] : " ; cin >> PilihK;
		cout <<endl;
		switch (PilihK)
		{
			case 1 :
				cout << "Diskon Yang Akan Di Dapatkan Adalah = 15% " << endl; break;
				cout << endl; break;
			case 2 :
				cout << "Masukan Harga Type C  = " ; cin >>TypeC ;
				DiskonC = TypeC * 15 / 100;
				Ttlbyr = TypeC - DiskonC;
				cout << " Total yang harus anda bayar adalah = " << Ttlbyr << endl;
			case 3 :
				cout << "Masukan Harga Type C  = " ; cin >>TypeC;
				DiskonC = TypeC * 15 / 100;
				Ttlbyr = TypeC - DiskonC;
				cout << "Diskon yang anda dapatkan = 20%,Harga Setelah di diskon = " << Ttlbyr << endl; break;
			default : cout << " ANDA KELUAR PROGRAM " << endl;
	}break;
		default:
			cout << "ANDA KELUAR PROGRAM "  << endl; break;
}
cin.get();
}

