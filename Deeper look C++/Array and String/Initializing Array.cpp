#include<iostream>
using namespace std;

int main()
{
	int month, day, total_days;
	int day_per_month[12] = {28, 30, 30, 30, 30, 31,31,31,31, 31,31,31};
	
	cout << "\nEnter month(1 12) :";
	cin >> month;
	
	cout << "Enter day(1 31) :";
	cin >> day;
	
	total_days = day;
	for(int j=0; j<month-1; j++)
		total_days += day_per_month[j];
	cout << "Total day is ; "<< total_days <<endl;
		
	
	return 0;
}
