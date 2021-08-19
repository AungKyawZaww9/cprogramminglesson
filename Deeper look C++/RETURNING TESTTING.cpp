#include<iostream>
#include<conio.h>
using namespace std;

class Phone

{
	private: 
		int samsumg;
		int mi_phone;
		int i_phone;
	
	public:
		Phone(): samsumg(0), mi_phone(0), i_phone(0)
		{	}
		Phone(int sa, int mi, int i) : samsumg(sa), mi_phone(mi), i_phone(i)
		{	}
		
	void getphone()
	{
		cout << "\nEnter number you want to buy 1:";
		cin >> samsumg;
		cout << "\nEnter number you want to buy 2:";
		cin >> mi_phone;
		cout << "\nEnter number you want to buy 3:";
		cin >> i_phone;
	}
	
	void showphone()
	{
		cout<<samsumg<<"\nks"<< mi_phone<<"\nks" <<i_phone<<"\nks";
	}
	
	Phone add_ph(Phone);
		
};
Phone Phone::add_ph(Phone p2)
{
	Phone price;
	price.samsumg = samsumg + p2.samsumg;
	price.mi_phone = mi_phone + p2.mi_phone;
	price.i_phone = i_phone + p2.i_phone;
	
	return price;
}
int main()
{
	Phone p1,p3,p4;
	Phone p2(6,6,6);
	
	p1.getphone();
	
	cout << "\nNo1 :"; p1.showphone();
	cout << "\nNo2 :"; p2.showphone();
	cout << "\nN03 :"; p3.showphone();
	cout << "\nNo4 :"; p4.showphone();
	
	
	return 0;
}














