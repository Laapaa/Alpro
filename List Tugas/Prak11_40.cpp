#include <iostream>
#include <string.h>
#define n 9
using namespace std;

int main()
{	
	int A,W,P;
	int Agus[n] = { 70, 81, 100, 79, 14, 61, 19, 22, 17};
	cout << "Sebelum DIlakukan Pengurutan" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	for(A=0; A<=n-1; A++)
		cout << Agus[A]<< "  ";
		cout << endl;
	
	for (W=0; W<=n; W++)
	{
		A=W;
		P=Agus[A];
		while (Agus>=0 && Agus[A-1] > P)
		{
			Agus[A] = Agus[A-1];
			A--;
		}
		Agus[A] =P;
	}
	cout << "Sesudah DIlakukan Pengurutan"<< endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
		cout << endl;
		for(A=0; A<=n-1; A++)
		cout << Agus[A] <<"  ";
	cout << endl;
	cout << endl;
cin.get();
}
