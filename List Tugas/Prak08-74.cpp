#include <iostream>
using namespace std;
 
int main()
{
    int Agus, Wahyu;
 
    cout <<"Masukan Jumlah Kolom: ";
    cin >> Wahyu;
 
    for(int i = 1, k = 0; i <= Wahyu; ++i, k = 0)
    {
        for(Agus = 1; Agus <= Wahyu-i; ++Agus)
        {
            cout <<"  ";
        }
 
        while(k != 2*i-1)
        {
            cout << "o ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
