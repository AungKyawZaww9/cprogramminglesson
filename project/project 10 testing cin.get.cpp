#include<iostream>
#include<string>

using namespace std;

class state{
	private:
		char a[20];
		char b[20];
		char c[20];
		char d[20];
		
	public:
	void hname()
	{
		cout << "\nEnter hostpital name:";
		cin.getline(a,20);
		cout << "\nEnter name Township::";
		cin.getline(b,20);
		cout << "\nEnter road name: ";
		cin.getline(c,20);
		cout << "\nEnter name(layDountkan) : ";
		cin.getline(d,20);
		cout << endl;
		
		//getline(cin,firstname);
		cout << "\n\t\t"<<a << endl;
		cout << "\n\t\t"<<b << endl;
		cout << "\n\t\t"<<c << endl;
		cout << "\n\t\t"<<d << endl;
	}
};
int main()

{
	//getch();
    int n;
    string kk;
//	part apart[SIZE]; 
    char y,z,f,test;
    char w =1;
    //Back obj1, obj2, obj3; 
	int x ;
//	cout << "Enter number ::(Yangon(1), Mandalay(2), Bago(3)) ::";
//	cin >> x;
	
	
	
	state name,name1;
	if(true)
	{
	cout << "\n<<Seikkan(a), North(b) , South(c), East(d) >>";
	cout << "\nEnter you want :" << w;
	
	
	if(true)
		{	
		name.hname();
		}
	else if(true)
		{
		name1.hname();
		}
	
	}
	return 0;
}
