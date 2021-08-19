#include<iostream>
using namespace std;

int  main()
{
	
	int size = 6;
	int j;
	double sales[size];
	
	cout << "Enter widget sales \n\n";
	for(j=0; j<size; j++)
		cin >> sales[j];
	
	double total = 0;
	for(j=0; j<size; j++)
		total  += sales[j];
	double average = total/size;
	cout << "Average :"<< average << endl;
	
	return 0;
}
