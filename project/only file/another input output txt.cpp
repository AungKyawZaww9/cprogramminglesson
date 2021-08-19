#include<iostream>
#include<fstream>
using namespace std;
class person
{
	protected:
		char name[80];
		char age[80];
		char phnumber[80];
		char a[20];
		
	public:
		void getdata()
		{
			cout << "\nwelcome :";
			cin.getline(a,20);
						
			cout << "\nEnter age :";
			cin.getline(age,80);
						
			cout << "\nEnter Ph.number :";
			cin.getline(phnumber,80);
			
			cout << "\nEnter name:";
			cin.getline(name,80);
		}
		void showdata()
		{
			cout << "\nName:" << a;
			cout << "\nage:" << age;
			cout << "\n\nphonenumber:" << phnumber;			
		}
};
int main()
{
	char ch;
	char a;
	person pers;
	fstream file;
	
	file.open("GROUP.TXT",ios::app | ios::out | ios::in | ios::binary);
	do{
		cout << "\n..Enter person's data..";
		pers.getdata();
		
		file.write(reinterpret_cast<char*>(&pers), sizeof(pers));
		
		cout << "\nEnter another(y,n)";
		cin >> ch;
	}while(ch == 'y');
	
	file.seekg(0);
	file.read(reinterpret_cast <char*> (&pers), sizeof(pers));
	while(!file.eof())
	{
		cout << "\n...Person....";
		
		pers.showdata();
		
		file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	}
	cout << endl;	

	return 0;
}
