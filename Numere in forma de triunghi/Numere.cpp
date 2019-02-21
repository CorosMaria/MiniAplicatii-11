// Numere.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	int i,coloana,rand;
	i=0;
	coloana=0;
	rand=1;
	cout<<"Numerele sunt:\n";
while(i<=90)
	{ if(i<10) cout<<"   ";
	if((i<100)&&(i>9)) cout<<"  ";
	if(i>99) cout<<" ";
	cout<<i;
	i++;
	coloana++;
	if(coloana==14-rand)
	{cout<<"\n";
	coloana=0;
	rand++;}
} 
cin.ignore();
cin.get();
    return 0;
}
