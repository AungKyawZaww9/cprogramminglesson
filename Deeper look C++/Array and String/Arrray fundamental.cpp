#include<iostream>
using namespace std;

int main()
{
	int age[4];
	int  j;
	
	
	for( j=0; j<4; j++)
	{
		cout << "\nEnter age :";
		cin >> age[j];
	}
	
	for(j=0; j<4; j++)
	{
		cout << "\nThe result age :"<<  age[j];
		
	}
	
	
	return 0;
}
