#include<iostream>
using namespace std;
int Size = 4;

struct part
{
	int  modelnumber;
	int partnumber;
	float cost;
	
};

int main()
{
	int n;
	part apart[Size];
	
	for(n=0; n<Size; n++)
	{
		cout << endl;
		cout << "Enter a number :";
		cin >> apart[n].modelnumber;
		
		cout << "Enter part number :";
		cin >> apart[n].partnumber;
		
		cout<< "Enter cost number :";
		cin >> apart[n].cost;
		
	}
	for(n=0; n<Size; n++)
	{
		cout << "\nModel >>" << apart[n].modelnumber;
		cout << "\nPart >>" << apart[n].partnumber;
		cout << "\nCost >>" << apart[n].cost;
		cout << endl;
	}
	
	
	
	
	return 0;
}
