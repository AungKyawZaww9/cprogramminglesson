#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[]= "Hello world, I'm ";
	
	int Max =80;
	char str2[Max];
	int a;
	
	for( a =0; a<strlen(str1); a++)//#include<cstring> for strlen()
		str2[a] = str1[a];
	str2[a] = '\0';
		
		cout << str2 << endl;
	
	
	return 0;
}

