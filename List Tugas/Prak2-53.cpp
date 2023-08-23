#include <iostream>
using namespace std;

int main()
{
	float jarak;
	
	cout << " Apakah Anda Harus membayar Gojek? " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Masukan Berapa Jarak Anda dari Lokasi " ;cin >> jarak;
	cout << endl;
	if (jarak == 5)
	cout << "ANDA TIDAK PERLU MEMBAYAR" << endl;
	else 
	cout << "ANDA PERLU MEMBAYAR" << endl;
	cin.get();
}