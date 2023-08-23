#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    char GANTINAMASUGAB[] = "Agus Wahyu";
    char COPYNAMASUGAB[] = "Agus Wahyu";
	int sugab;
	
	cout << "	Variasi String	" << endl;
	cout << "	~~~~~~~~~~~~~~	" << endl;
	cout << endl;
	
	cout << " Nama Lengkap	   :	" << COPYNAMASUGAB << endl;
	cout << endl;
	
	cout << " Karakter Genap Diganti Dengan -F,Y,T,P-" << endl;
	GANTINAMASUGAB[0] = 'F';
	GANTINAMASUGAB[2] = 'Y';
	GANTINAMASUGAB[6] = 'T';
	GANTINAMASUGAB[8] = 'P';
	cout << " Menjadi : " << GANTINAMASUGAB << endl;
	cout << endl;
	
	for(sugab=0 ; GANTINAMASUGAB[sugab]; sugab++)
		GANTINAMASUGAB[sugab] = toupper(GANTINAMASUGAB[sugab]);
		cout << " Hasil Tulisan TOUPPER 	: " << GANTINAMASUGAB << endl;
	cout << endl;
	
	strcpy(COPYNAMASUGAB,GANTINAMASUGAB);
	cout << " Tulisan Asli	        :	" << COPYNAMASUGAB << endl;
	cout << " Tulisan Hasil Salinan	:	" << GANTINAMASUGAB << endl;
	cout << endl;
	cin.get();
}
