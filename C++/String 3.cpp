#include<iostream>
#include<string>
using namespace std;
int main()
{
	char kk[80];
	string w;
	
	cout << "Enter words :";
	cin >> w;
	
	int ff = w.length();
	cout << "\nAll world :";
	for(int j =0; j< ff; j++)
		cout << w.at(j);
		w.copy(kk,ff);
		cout << "\nALL :" << kk;
	
	
	
	return 0;
}
