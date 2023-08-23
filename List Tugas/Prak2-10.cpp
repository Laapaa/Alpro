#include <iostream>
using namespace std;

int main()
{
long gajijm,jamlembur,gajibln,gajipkk,hrglmbr,gaji;
gajijm = 3500;
hrglmbr = 4000;
cout << "Berapakah gaji pak anto jika selama 1 bulan dia bekerja lembur selama 5 jam? " <<endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
cout << " Berapa Lama Jam Kerja Karyawan? = " ;cin >> jamlembur;
cout<<endl;
gaji = gajijm * 48;
if (jamlembur >= 48)
	gajipkk = jamlembur * hrglmbr;
	gajibln = gajipkk + gaji;
cout << "Total Gaji Karyawan Adalah =  "  << gajibln <<endl;
cin.get();
}	
