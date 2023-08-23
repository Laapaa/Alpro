#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int tanggallahir[1] = {30};
	int bulanlahir[1] = {03};
	int tahunlahir[1] = {2003};
	
	//menggunakan pointer
	int *pn  = tanggallahir;
	int *pn2 = bulanlahir;
	int *pn3 = tahunlahir;
	cout <<endl;
	
	cout << "Menampilkan tanggal lahir = " << pn << endl;
	cout << "~~~~~~~~~" << endl;
	cout << endl;
	cout << "Menampilkan bulan lahir = " << pn2 << endl;
	cout << "~~~~~~~~~" << endl;
	cout << endl;
	cout << "Menampilkan tahun lahir = " << pn3 << endl;
	cout << "~~~~~~~~~" << endl;
	cout << endl;
	
	cin.get();
}
