#include <iostream>
using namespace std;

int main()
{
	float gaji;
	
	cout << " Apakah Anda Termasuk Ke Golongan Orang kaya?  " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << " Masukan Nilai Gaji Anda = " ;cin >>gaji;
	cout << endl;
	if (gaji >= 5000000)
	cout << " Orang kaya " << endl;
	cin.get();
}