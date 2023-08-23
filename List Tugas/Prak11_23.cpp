#include <iostream>
using namespace std;

int main() 
{
	int agus, wahyu, prasetyo[100];
	int i, j, k;
	cout<<endl;
	cout<<"    Selection Sort (Ascending)    "<<endl;
	cout<<"~~~~~~~~~~~~"<<endl;
	cout << "Masukkan jumlah data: "; cin >> agus;
	for (i = 0; i < agus; i++)
	{
		cout << "Data ke-" << i + 1 << " = " ;
		cin >> prasetyo[i];
    }
	cout<<"   Sebelum Melakukan Pengurutan   "<<endl;
	cout<<"~~~~~~~~~~~~"<<endl;
	for(i = 0; i <= agus-1; i++)
	{
		cout<<prasetyo[i]<<" ";
	}
	for (i = 0; i < agus-1; i++)
	{
		wahyu = i;
		for(j = i+1; j < agus; j++)
		{
			if(prasetyo[j] < prasetyo[wahyu])
			{
				wahyu = j;
			}
		}
		k = prasetyo[wahyu];
		prasetyo[wahyu] = prasetyo[i];
		prasetyo[i] = k;
	}
	cout<<endl;
	cout<<"   Sesudah Melakukan Pengurutan   "<<endl;
	cout<<"~~~~~~~~~~~~"<<endl;
	for(i = 0; i < agus; i++)
	{
		cout << prasetyo[i] << " ";
	}
	cin.get();
}
