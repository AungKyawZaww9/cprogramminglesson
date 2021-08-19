#include<iostream>
#include<conio.h>
using namespace std;

class Pencil
{
	private:
		int feet;
		float cemtimeter;
		
	public:
		Pencil(): feet(0), cemtimeter(0.0)
		{	}
		Pencil(int ft, float cm): feet(ft), cemtimeter(cm)
		{	}
		
	void getpen()
	{
		cout << "\nEnter pen1 :";
		cin >> feet;
		cout << "\nEnter pen2 :";
		cin >> cemtimeter;
	}
	
	void showpen()
	{
		cout << feet << "\'" << cemtimeter << "\'";
	}
	void add_pen (Pencil , Pencil);
};
void Pencil:: add_pen(Pencil p2, Pencil p3)
{
	cemtimeter = p2.cemtimeter + p3.cemtimeter;
	feet = 0;
	
	if(cemtimeter >= 10)
	{
		cemtimeter -= 10;
		feet ++;
	}
	feet += p2.feet + p3.feet;
	
}

int main()
{
	Pencil pp1, pp3, pp2;
	pp2.getpen();

	
	pp1.getpen();
	pp3.add_pen(pp1, pp2);
	
	cout << "\nPencil ! :"; pp1.showpen();
	cout << "\nPencil @ :"; pp2.showpen();
	cout << "\nPencil # :"; pp3.showpen();
	
	
	
	
	return 0;
}














