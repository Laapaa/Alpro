#include <iostream>
using namespace std;

int main ()
{
	float Alas,Tinggi_Segitiga, Tinggi_Prisma, D, L;
	cout<<endl;
	cout << " Menampilkan Hasil dari Prisma Segitiga " << endl; 
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
	cout << endl;
	cout << "Masukan Nilai Alas = "; cin >> Alas;
	cout << "Masukan Nilai Tinggi Segitiga = "; cin >> Tinggi_Segitiga;
	cout << "Masukan Nilai Tinggi Prisma = "; cin >> Tinggi_Prisma;
	D = Alas*Tinggi_Segitiga *0.5;
	L = D*0.33*Tinggi_Prisma;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout << "Nilai Volume Prisma adalah " << L << endl;
	cin.get();
	}