#include<iostream>
#include<string>
using namespace std;

int main()
{
	string full_name, nickname , adress;
	string greeting("\tHello ,");
	
	cout << "\nEnter your full name :";
	getline(cin, full_name);
	
	cout << "\nYour full name is :" << full_name;
	cout << "\nEnter your nickname :";
	cin >> nickname;
	
	greeting += nickname;
	
	cout << greeting << endl;
	
	cout << "\nEnter your adress :";
	
	cout << "Terminate '$' :" << endl;
	
	getline(cin, adress,'$');
	
	cout << "Your adress is :" << adress<<endl;
	
	
	
	return 0;
	}

