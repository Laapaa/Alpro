// Nama: Agus wahyu prasetyo
// Npm: 4521210064
#include <iostream>
using namespace std;

int main()
{
		int Agus,i,n;
		cout << endl;
		cout << " Menampilkan pengulangan 2x (Agus) dan 4X (i) " << endl;
		cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
		n = 0;
		for (Agus = 1; Agus <=2 ; Agus++)
			for (i = Agus; i <= 4; i++)
		{
			n = n+5;
			cout << " Indeks = " << n << " dengan k = " << Agus << endl;
		}
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Nilai Akhir = " << n << endl;
	
	cin.get();
}

