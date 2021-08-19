#include<iostream>
#include<cstring>
#define Size 10
using namespace std;

int main()
{
	
	int Max =80;
	int kk = 60;
	char str2[Max];
	
	
	cout << "Enter you name :";
	//cin >> str1;
	
	
	cin.get(str2,Max);		
	cout << str2<< endl;
		
	char str1[kk];
	strcpy(str1,str2);
	cout << str1 << endl;
	
	
	return 0;
}

