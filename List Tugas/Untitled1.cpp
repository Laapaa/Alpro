#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int PilihK;
	char Pilih;
	float TypeA,TypeB,TypeC,Diskon,jmlhdisk,Bayar,Ttlbyr;
	cout << endl;
	cout << "MENU" <<endl;
	cout <<"~~~~~~" <<endl;
	cout << " A. Jenis Belanja Type A " << endl;
	cout << " B. Jenis Belanja Type B" << endl;
	cout << " C. Jumlah Belanja Type C" << endl;
	cout << endl;
	cout << "Pilih [A/B/C]  = " ; cin >> Pilih;
	cout<< endl;
	switch(Pilih)
	{
		case 'A':
		cout << "1. Jumlah Diskon" << endl;
		cout << "2. Jumlah Total Bayar" << endl;
		cout << "3. Jumlah Diskon dan Total Bayar" << endl;
		cout << endl;
		cout << "Pilih [1/2/3] : " ; cin >> PilihK;
		switch (PilihK)
		{
			case 1 :
				cout << "Masukan Ukuran Sisi Segiempat  = " ; cin >> TypeA;
				Bayar = TypeA * 0.1;
				cout << "Keliling Segiempat  = " << Bayar << endl; break;
		}

cin.get();
}
