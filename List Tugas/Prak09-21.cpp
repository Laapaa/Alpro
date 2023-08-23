   #include <iostream>
   using namespace std;
   
   int agus;
   long int rekurs02(int wahyu);
   
   int main()
   {
	   int wah=1;
	   cout<<"Masukkan Faktorial yang Diinginkan : "; cin >> agus;
	   cout<<endl;
	   cout<<agus<<"! = 1*2*3*4*5*6*7 = "<<rekurs02(agus);
	   cout<<endl;
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	   for(int wahy=1; wahy<=agus; wahy++)
	   {
		   for(int wahyu=wahy; wahyu==wahy; wahyu++)
		   {
			   wah = wah * wahy;
			   cout<<" Nilai Step by Step : "<<wahy<<" Dengan Hasil = "<<wah;
			   cout<<endl;
		   }
	   }
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	   cout<<endl;
	   cin.get();
   }
   
   long int rekurs02(int agus)
   {
	   if(agus == 0)
		   return(1);
	   else
		   return(agus * rekurs02(agus - 1));
   }
   

			   
