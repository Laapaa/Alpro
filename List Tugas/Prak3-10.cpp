#include <iostream>
using namespace std;

int main()
{
	int Bilangan;
	cout << endl;
	cout << "Menampilkan Nilai" << endl;
	cout << "Masukan NIlai, Untuk menentukan KKM =	"; cin >> Bilangan;
	cout << endl;
	
if (Bilangan >= 80){
	cout << "A" << endl;}
else
    if (Bilangan >= 76 || Bilangan <=79){
		cout << "A-" << endl;}
	else
	   if (Bilangan >= 72 || Bilangan <=75){
			cout << "B+" << endl;}
		else 
		if (Bilangan >= 68 || Bilangan <=71){
				cout << "B" << endl;}
				else
					if (Bilangan >= 64 || Bilangan <=67){
					cout << "B-" << endl;}
						else
						if (Bilangan >= 61 || Bilangan <=63){
			                    cout << "C+" << endl;}
							else
							if (Bilangan >= 56 || Bilangan <=60){
		                            cout << "C" << endl;}
								else
								if (Bilangan >= 45 || Bilangan <=55){
	                                cout << "D" << endl;}
									else
									if (Bilangan <= 45){
                                    	cout << "E" << endl;}
									
cin.get();
}
