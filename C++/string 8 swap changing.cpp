#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string kk("\nWhat is your name");
	string zz = "Kyaw kyaw";
	string mm = "zaw zaw";
	string cc,s,c;
	//string s;
	//string c;
//	cc = kk;
	
	cout << "\nThe  words\n" << kk << endl;
	
	cout << "\nKyaw kyaw? Zaww Zaww?\n";
	
	c = "Neither\t " + zz + "\tNor\t" + mm;
	
	s.swap(c);
	cout << s << endl;
	
	return 0;
	}

