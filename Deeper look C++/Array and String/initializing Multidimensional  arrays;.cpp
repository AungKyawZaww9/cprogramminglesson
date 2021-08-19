#include<iostream>
#include<iomanip>

using namespace std;
int Districts = 4;
int Months = 3;

int main()
{
	
	int d,m;
	
	double sales[Districts][Months] = { {3.1, 2.1, 4.2,} , { 1.1, 3.6, 3.8},
									{3.9, 5.1, 9.2,}, {3.90, 2.70, 33.2,}};
	
	cout <<  "\n\n";
	cout << "\t\t\tMonth\n";
	cout << "\t1\t\t2\t\t3";
	for(d=0; d<Districts; d++)
		{
			cout << "\nDistricts " << d+1;
			for(m=0; m<Months; m++)
				cout << setw(10) << setiosflags(ios::fixed)
					 << setiosflags(ios::showpoint) << setprecision(2)
					 << sales[d][m];
		
								}							
	
	cout << endl;
	
	
	return 0;
}
