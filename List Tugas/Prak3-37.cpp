#include <iostream>
using namespace std;

int main()
{
	int Bilangan;
	cout << endl;
	cout << "Menampilkan Warna" << endl;
	cout << "Masukan Angka Untuk Menentukan Warna =	"; cin >> Bilangan;
	cout << endl;
	
if (Bilangan == 1)
cout << "Merah " << endl;
	else
if (Bilangan ==2)
cout << "Kuning " << endl;
	else
if (Bilangan==3)
cout << "Hijau " << endl;
	else
if (Bilangan ==4)
cout << "warna Biru " << endl;
	else
	cout << " Warna TIdak Valid" << endl;
cin.get();
}