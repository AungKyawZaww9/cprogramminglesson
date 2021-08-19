/*#include <iostream>
using namespace std;
const int MAX = 2000; //max characters in string
char str[MAX]; //string variable str
int main()
{
	cout << "\nEnter a string :";
	cin.get(str, MAX); //terminate with $
	cout << "\nYour entered :" << str <<endl;
	return 0;
}*/

// partaray.cpp
// structure variables as array elements

#include <iostream>
#include <cstring>
#include<string>
using namespace std;
const int SIZE = 1; 

struct part 
	{
		char Username[50]; 
		char User_Adress[50]; 
		char NRC_number[50]; 
	};

int main()
{
	int n;
	part apart[SIZE]; 
	for(n=0; n<SIZE; n++) 
	{
		cout << endl;
		cout << "Enter Username: ";
			//	cin.get(apart[n].Username);
			//	getline(cin,apart[n].Username,50);	
		cin >> apart[n].Username;
		cout << "Enter User_Adress: ";
			//	getline(cin,apart[n].User_Adress);
		cin >> apart[n].User_Adress; 
		cout << "Enter NRC_number: ";
			//	getline(cin,apart[n].NRC_number;
		cin >> apart[n].NRC_number; 
	}
cout << endl;
for(n=0; n<SIZE; n++) 
	{
		cout << "Username: " << apart[n].Username << endl;
		cout << "User_Adress: " << apart[n].User_Adress << endl;
		cout << "NRC_number: " << apart[n].NRC_number << endl;
	}
return 0;
}
