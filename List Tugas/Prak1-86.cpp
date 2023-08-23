#include <iostream>
using namespace std;

int main()
{
	float Uang,Diskon,Bayar,Total;
	Uang = 30000;
	
	cout << " TOTAL YANG HARUS DIBAYAR ANDI " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	if (Uang >= 30000)
	(Diskon = Uang * 0.15);
	Bayar = Uang - Diskon;
	cout << "Total harga =" << Bayar << endl;
	cin.get();
}