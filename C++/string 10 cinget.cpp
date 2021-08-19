#include<iostream>
using namespace std;

int main()
{
	 int Max= 80;
	
	char str[Max];
	
	
	cout << "\nEnter your name :";
	cin.get(str,Max);
	
	cout << "Your enter :" << str <<endl;
	
	
	return 0;
}

