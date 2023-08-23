#include <iostream>
using namespace std ;

int main () {
	int agus ;
	bool Prima = true ;
	
	cout << "Mementukan bilangan prima atau bukan" << endl ;
	cout << "Masukkan angka : " ; cin >> agus ;
	
	for ( int WP = 2 ; WP <= agus/2 ; WP++ ) { 
		if ( agus % WP == 0 ) {
			Prima = false ;
			break;
		}
	}
	cout << "~Hasil yang di input akan di bagi 2~ " << endl;
	cout << "~Jika hasil sama dengan 1 maka bilangan prima~"<< endl;
	cout << "~Jika hasil tidak sama dengan 1 maka bukan bilangan prima~"<< endl;
	if (Prima) {
		cout << "~karena bilangan disaat di bagi 2 sama dengan 1 maka~"<< endl;
		cout << endl;
		cout << agus << " ~adalah bilangan prima~" << endl ;
	} else {
		cout << "~Karena bilangan disaat di bagi 2 tidak sama dengan 1 maka~" << endl;
		cout << endl;
		cout << agus << " ~adalah bukan bilangan prima~" ;
	}
}
