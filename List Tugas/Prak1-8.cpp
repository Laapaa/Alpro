#include <iostream>
using namespace std;

int main ()
{
int a, b;
a = 22; b = 66 + a++;
cout <<"Tanda ++ dibelakang";
cout << endl;
cout << "a =" << a << endl;
cout << "b =" << b << endl;
cout << endl;
a=22; b=66 + ++a;
cout << "Tanda ++ didepan";
cout << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << endl;
cin.get();
}