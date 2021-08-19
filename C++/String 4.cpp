#include<iostream>
using namespace std;

int main()

{
	int days = 7; // all number days 
	char  Max = 10; // all number character
	int  j;
	
	
	char star[days][Max] = {"Sund   ay", "Monday", "Thuseday", "Westday","7"};
	
	for (j =0; j<days;  j++)
	cout << star[j] << endl;
	
	return 0;
	
	
	}

