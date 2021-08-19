#include<iostream>
using namespace std;

int  main()
{
	int months = 12;// for months
	char Max = 10;
	
	int name = 2;//for akz
	int mm = 14;
	
	char star[months][Max] = {"January","february", "Match", "April", "May","June", "July", "Auguest", "september", "October","November", "December"};
	
	for(int a =0; a<months; a++)
		cout << star[a] << endl << endl;
		
	char kyaw[months][mm]	= {"Aung kyaw Zaww"};
	
	for(int b =0; b<name; b++)
		cout << kyaw[b] << endl << endl;
	
	return 0;
	}

