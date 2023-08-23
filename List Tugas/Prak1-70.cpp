#include <iostream>
using namespace std;

int main ()
{
	float Alas,Tinggi_Segitiga,Luas;
	cout<<endl;
	cout << " Menghitung LUAS Segitiga " << endl; 
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
	cout << endl;
	cout << "Masukan Nilai Alas = "; cin >> Alas;
	cout << "Masukan Nilai Tinggi Segitiga = "; cin >> Tinggi_Segitiga;
	Luas = Alas*Tinggi_Segitiga *0.5;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout << "Nilai LUAS Segitiga adalah = " << Luas << endl;
	cin.get();
	}