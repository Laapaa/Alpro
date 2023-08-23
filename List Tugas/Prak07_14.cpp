#include <iostream>
using namespace std;

int main()
{
	const int A=10;
	int Nilai[A] = {70,20,45,88,90,65,75,78,50,100};
	int G, U, Wahyu=0;
	float Rata;
	cout << endl;
	cout << "Memberikan nilai mahasiswa dan Nilai Rata rata keseluruhan" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout<<"Banyaknya Data = "; cin >> U;
	for (G=0;G < A; G++)
	{
		cout << "Data Mahasiswa ke- "<< G+1<<" : " << Nilai[G] << endl;
		Wahyu = Wahyu + Nilai[G];
	}
	Rata = Wahyu / U;
	cout << endl;
	cout << "Total dari penjumlahan semua nilai " << Wahyu << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Nilai Rata Rata yang di dapatkan " << Rata << endl;
	cin.get();
}
