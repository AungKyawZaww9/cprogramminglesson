#include<iostream>
#include<iomanip>

using namespace std;

const int Districts = 4;
const int Months = 3;

int main()
{
	int d,m;
	double sale[Districts][Months];
	
	for(d=0; d<Districts; d++)
		for(m=0; m<Months; m++)
		{
			cout << "Enter sales for district "<<d++;
			cout << "month" << m+1 << ":";
			cin >> sale[d][m];
		}
	cout <<"\n\n";
	
	cout << "\t\t\tMonth\n";
	cout << "\t\t1\t\t2\t\t3";
	for(d=0; d<Districts; d++)
		{
			cout << "\nDistricts" << d+1;
			for(m=0; m<Months; m++)
				cout << setiosflags(ios::fixed)<< setiosflags(ios::showpoint)
					 << setprecision(2) << setw(10) << sale[d][m];
		}
		cout << endl;
		
	
	
	
	
	
	return 0;
}
