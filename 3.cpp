#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string a;
    cout<<"PROGRAM SEGITIGA KATA"<<endl<<endl;
    cout<<"Masukan suatu kata : ";
    cin>>a;cout<<endl;
    int i=a.length()-1; 
    for (i;i>=0;i--)
	{ 
        for(int b=0;b<=i;b++)
		{ 
            cout<<a[b];
        }
        cout<<endl;
    }
    getch();
}
