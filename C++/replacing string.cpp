#include<iostream>
#include<string>
using namespace std;

int main()
{
	string aName = "AUNG KYAW ZAWW";
	string username;
	cout << "\nEnter your first name :";
	cin >> username;
	
	if(username == aName)
		cout << "\nGreeting , geroger";
	
	else if(username < aName)
		cout << "\nyour come before";
	
	else
	cout << "You come after gerogae\n";
	
	int n = username.compare(0,2,aName, 0,2);
	cout << "\nThe first two letters of your name";
	
	if(n==0)
		cout << "\nmatch";
	else if(n<0)
		cout << "comebefore";
	else
		cout << "\ncome afer"<< endl;
	
	cout << aName.substr(0,2)<< endl;
	
	
	
	
	return 0;}

