#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1 [] = "aiohfjoiioah klajkl; jkml, lkjdashjfdshioefnkl;";
	
	
	const int Max = 60;
	char str2[Max];
	
	strcpy(str2,str1);
	cout << str2 <<endl;
	
	char str3[Max];
	strcpy(str3,str1);
	cout << str3 << endl;
	
	
	return 0;}

