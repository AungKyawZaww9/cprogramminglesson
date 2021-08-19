#include<iostream>
using namespace std;
class circle
{
	protected:
		int xco, yco;
		int radius;
		color fillcolor;
		fstyle fillstyle;
		
	public:
		void set(int x, int y, int r, color fc, fstyle fs)
		{
			xco = x;
			yco = y;
			radius = r;
			fillcolor = fc;
			fillsyle = fs;
			
		}
		
	void draw()
	{
		set_color(fillcolor);
		set_fill_style(fillstyle);
		draw_cricle(xco,yco,radius);
		
	}
		
};

int main()
	
	{
		init_graphic();
		
		circle c1;
		circle c2;
		circle c3;
		
		c1.set(11, 22, 33, cBlue, X_fill);
		c2.set(44, 55, 66, cRed, O_Fill);
		c2.set(77, 88, 99, cYellow, Medium_Fill);
		
		c1.draw();
		c2.draw();
		c3.draw();
		set_cursor_pos(1,25);
		
		return 0;
	}
