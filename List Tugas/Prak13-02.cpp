#include <iostream>
using namespace std;

int main()
{
	int gab = 1; 
	int *th = &gab; 
	int wahyu;
	cout << endl;
	cout << endl;

	cout << " Masukan Bulan [1...12]= ";cin>> wahyu; 
	cout << " ~~~~~~~~~~~~~~~~~ " << endl;
	if (wahyu == 1)
		cout << " Januari " << endl;
		else
		if (wahyu == 2 )
		cout << " Febuari " << endl;
		else
		if (wahyu == 3 )
		cout << " Maret " << endl;
		else
		if (wahyu == 4 )
		cout << " April " << endl;
		else
		if (wahyu == 5 )
		cout << " Mei " << endl;
		else
		if (wahyu == 6 )
		cout << " Juni " << endl;
		else
		if (wahyu == 7 )
		cout << " Juli " << endl;
		else
		if (wahyu == 8 )
		cout << " Agustus " << endl;
		else
		if (wahyu == 9 )
		cout << " September " << endl;
		else
		if (wahyu == 10 )
		cout << " Oktober " << endl;
		else
		if (wahyu == 11 )
		cout << " November " << endl;
		else
		if (wahyu == 12 )
		cout << " Desember " << endl;
	cout << endl;
	cin.get();
}
