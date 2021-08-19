#include<iostream>
#include<fstream>
using namespace std;
class person
{
	protected:
		char name[80];
		int age;
		int phnumber;
		
	public:
		void getdata()
		{
			cout << "\nEnter name:";
			cin.getline(name,80);
			cout << "\nEnter age :";
			cin >> age;			
			cout << "\nEnter Ph.number :";
			cin >> phnumber;
		}
		void showdata()
		{
			cout << "\nName:" << name;
			cout << "\nage:" << age;
			cout << "\nphonenumber:" << phnumber;			
		}
};
int main()
{
	char ch;
	person pers;
	fstream file;
	file.open("GROUP.DAT",ios::app | ios::out | ios::in | ios::binary);
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
