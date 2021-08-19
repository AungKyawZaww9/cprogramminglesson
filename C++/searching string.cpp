#include <iostream>
#include <string>
using namespace std;
int main()
{
	string f ="Hay aung kyaw zaww what are you doing now!";
	string first = "Hay aung kyaw zaww what are you doing now! Oh.. I'm doing code testing on my phone beacause my computer is broke !!!";
	int n;
	
	n = first.find("computer");
	cout << "Computer number are :" << n << endl;
	
	n = first.find_first_of("Oh");
	cout << "Oh number is :" << n << endl;
	
	n = first.find_first_of("broke");
	cout << "Broke number is :" << n << endl;
	
	int z = first.find("now!");
	cout << "search :" << z << endl;
	
	
	n = f.find_first_of("you");
	cout << "\nFinding  you :" << n ;
	
	n = f.find_first_not_of("you");
	cout << "\nNOt of :" << n;

	
	return 0;
	}

