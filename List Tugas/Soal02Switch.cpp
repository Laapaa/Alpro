#include <iostream>
using namespace std;

int main ()
{
	int Menu;
	cout << endl;
	cout << " Menampilkan Menu 1/2/3/4" << endl;
	cout << endl;
	cout << "Masukan Menu [1/2/3/4] = "; cin >> Menu;
	cout<< endl;
	switch (Menu)
	{
		case 1 : cout << "Nasi Goreng Dengan Harga RP.5000" << endl; break;
		case 2 : cout << "Gado-gado Dengan Harga RP.3500" << endl; break;
		case 3 : cout << "Bubur Ayam dengan harga RP.2500" << endl; break;
		case 4 : cout << "Ayam Bakar Pedas dengan harga RP.7500" << endl; break;
		default : cout << "Pilihan Anda Tidak Terdaftar Di Menu" << endl;
	}
cin.get();
}