#include<iostream>
#include<fstream>
using namespace std;
class person{
	protected:
		char name[80];
		short age;
	
		
	public:
	void printname() 
    { 
    string str1 = "\n\t\t\t\t   Welcome to Yangon";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\nPlease enter (East_District, West_District, North_District or South_District) ");
    
	}
	void second()
    {
    string str1 = "\n\t\t\t\t  Welcome to Mandalay";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\nPlease enter (East_District, West_District, North_District or South_District) ");
	}
	void third()
	{
	string str1 = "\n\t\t\t\t   Welcome to Bago";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\nPlease enter (East_District, West_District, North_District or South_District) ");
	}
    
};
int main()
{
	person pers;
	pers.printname();
	pers.second();
	pers.third();
	
	ofstream outfile("Person.txt", ios::binary);
	outfile.write(reinterpret_cast <char*> (&pers), sizeof(pers));
	
	
	return 0;
}
