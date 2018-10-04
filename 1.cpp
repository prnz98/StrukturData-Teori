#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int i,n;
	float rata,ta;
	
	cout<<"Masukan jumlah angka yang akan dirata-rata kan = ";cin>>n;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"Masukkan angka indeks ke-"<<1+i<<" = ";cin>>a[n];
		ta=ta+a[n];
	}
	cout<<endl;
	cout<<"Rata-rata dari angka-angka diatas = "<<ta/n;
	
	getch();
	return 0;
}
