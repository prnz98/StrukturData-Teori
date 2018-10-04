#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

main(){
	int i,n,ta=0,x,xi2=0;
	float sd,sdf,r;
	
	cout<<"Masukan jumlah data = ";cin>>n;
	int a[n];
	
	for(i=0;i<n;i++){
		cout<<"Masukkan data ke-"<<i+1<<" = ";cin>>a[n];
		ta=ta+a[n];	
		xi2=xi2+pow(a[n],2);
	}
	x=pow(ta,2);
	sd=sqrt(ta/n);
	cout<<endl;
	cout<<"Rata-rata = "<<ta/n<<endl;
	cout<<"Varian = "<<(n*xi2-x)/(n*(n-1))<<endl;
	cout<<"Standar Deviasi = "<<sd;

	getch();
	return 0;
}
