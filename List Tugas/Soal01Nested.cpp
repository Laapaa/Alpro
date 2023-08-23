#include <iostream>
using namespace std;

int main()
{
	int Bilangan;
	cout << endl;
	cout << "Menampilkan Hari" << endl;
	cout << "Masukan Angka Untuk Menentukan Hari =	"; cin >> Bilangan;
	cout << endl;
	
if (Bilangan <= 45)
	cout << "Hari Minggu " << endl;
else
	if (Bilangan <= 44 || Bilangan <55)
	cout << "Hari Senin " << endl;
	else
if (Bilangan ==2)
cout << "Hari Selasa " << endl;
	else
if (Bilangan==3)
cout << "Hari Rabu " << endl;
	else
if (Bilangan ==4)
cout << "Hari Kamis " << endl;
	else
if (Bilangan ==5)
cout << "Hari Jumat " << endl;
	else
if (Bilangan ==6)
cout << "Hari Sabtu " << endl;
	else
		cout << " Hari tidak Valid" << endl;
cin.get();
}