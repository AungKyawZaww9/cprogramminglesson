#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main()
{	
	char ch;
do{
	
	string firstname, secondname, thirdname;
	string fullname("Hellow // aung kyaw zaww");
	
	cout << "Enter your first name //";
	getline(cin,firstname);
	cout << "\nYour first name is //"<< firstname << endl;
	
	cout << "\nYour second name is //";
	cin >>  secondname;
	fullname += secondname;
	
	cout << fullname << endl;
	
	cout << "Enter your third name //";
	
//	cout << "\nTermingate '$'";
	
	getline(cin, thirdname);
	
	cout << "Your third name is //" << thirdname << endl;
	
	cout << "Do you wanna again(y,n)";
	cin>> ch;
}while(ch == 'y');
	
	return 0;
	}

