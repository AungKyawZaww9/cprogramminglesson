#include<iostream>
#include<string>
using namespace std;

int main()
{
	char charray[80];
	string word;
	
	cout << "Enter a word :";
	cin >> word;
	
	int ww = word.length();
	cout << "One character at a time :";
	
	for(int j =0; j < ww; j++)
		cout << word.at(j);
	word.copy(charray,ww,0);
	
//	charray[ww] = 0;
	cout << "\nArray contains: " << charray <<endl;
	
	
	
	return 0;
	}

