// program pentru afisarea a 3 numare aleatoare
#include "stdafx.h"
#include < iostream >
using namespace std;

int main(void)
{
	int nr;
	nr=rand();
	cout <<" \n\tNumarul aleator intre 0 si :"<< RAND_MAX <<" este: " << nr ;
	nr=rand();
	cout <<" \n\tNumarul aleator intre 0 si :"<< RAND_MAX <<" este: " << nr ;
	cout <<" \n\tNumarul aleator intre 0 si :"<< RAND_MAX <<" este: " << rand() ;
	cin.get();
	return 0;
}

