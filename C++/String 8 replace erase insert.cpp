#include<iostream>
#include<string>
using namespace std;

int main()
{	
	string R1("Hello! My name is Aung");
	string R2("Hi");
	string R3("kyaw");
	string R4("Nice to meet you!");
	
	R1.erase(0,6);
	R1.replace(0,6,R2);
	R1.insert(0,R4);
	R1.append(3,'!');
	
	int x = R1.find(' ');
	while(x < R1.size())
	{
		R1.replace(x,1,"/");
		x = R1.find(' ');
		}
		
	cout << "\nR1 :" << R1 << endl; 
	
	return 0;
	}

