// Numere.cpp : main project file.

#include "stdafx.h"
#include < iostream >
using namespace std;
int af_i(int,int,int);//prototipul functiei
int main(void)
{
	int n1,n2,nc,c;
	cout<<"Afisare de la:";
	cin>>n1;
	cout<<"pana la:";
	cin>>n2;
	cout<<"Cate coloane:";
	cin>>c;
	nc=af_i(n1,n2,c);
	cout<<"\n\nS-au afisat "<<nc<<" caractere.";
	cout<<"\nSuma caracterelor afisate este:";
    cin.ignore();
	cin.get();
	return 0;
}
int af_i(int inc, int sf, int col)
{
	int i,n;
	for(i=inc; i<=sf;i++)
	{ cout<<i<<" ";
	n++;
	s=s+i;
	if(n%col==0)
	{cout<<"\n";
	}
	}
	return n;
}