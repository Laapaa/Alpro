#include <iostream>
using namespace std;

int main()
{
	float jarak;
	
	cout << " Berapa Uang Yang Anda Tabung? " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Masukan Jumlah Uang Anda Disini = " ;cin >> jarak;
	cout << endl;
	if (jarak == 500000)
	cout << "SELAMAT ANDA DIPERBOLEHKAN MEMBUKA TABUNGAN BARU" << endl;
	else 
	cout << "MAAF SALDO ANDA TIDAK MENCUKUPI" << endl;
	cin.get();
}