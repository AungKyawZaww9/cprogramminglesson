#include <iostream> 
#include<conio.h>
#include<string>
using namespace std; 

class Back
{ 
     
    public: 
    char a,b,c,d;
  
    // Member Functions() 
    void printname() 
    { 
    string str1 = "\n\t\t\t\t   Welcome to Yangon";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\nPlease enter (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "\nEnter :";
    cin >> str3;
   	
   	cout << "\n\n\n...In " << str3 << "...";
    } 
    void second()
    {
    string str1 = "\n\t\t\t\t  Welcome to Mandalay";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\nPlease enter (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "\nEnter :";
    cin >> str3;
   	
   	cout << "\n\n\n...In " << str3 << "...";
	}
	void third()
	{
	string str1 = "\n\t\t\t\t   Welcome to Bago";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\nPlease enter (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "\nEnter :";
    cin >> str3;
   	
   	cout << "\n\n\n...In " << str3 << "...";
		
	}

}; 

class Calculator{
	protected:
		char name[20]; 
	    char adress[50];
	    char Ph[50];
	    char blar[50];
	public:
		void getuser()
		{
			cout << "Please fill";
			cin.getline(blar,50); 
			cout << "\nEnter Your Name::"; 
		    cin.getline(name, 20); 
		    cout << "\nEnter your adress ::";
		    cin.getline(adress,50);
		    cout << "\nEnter your Ph ::";
		    cin.getline(Ph,50);
		}
		void showuser()
		{
			cout << "\nYour Name is:: " << name; 
		    cout << "\nYour adress is:: " << adress; 
		    cout << "\nYour Ph.No is:: " << Ph; 
		}
		
};

  
int main() 

	{ 
	getch();
    int n;
    string kk;

    char y, z, w, f, h, q, htein, booking;
   	char ymap, mmap, bmap;
   	char thewhole;
    Back obj1, obj2, obj3; 
	int x ;
	Calculator use;
	
	do{
	
	cout << "\nEnter number ::(Yangon(1), Mandalay(2), Bago(3)) ::";
	cin >> x;
 
    switch (x) 
    { 
        case 1:  
        
           do{
	    	obj1.printname(); 			// accessing member function 
		   
		    if(true)
		    {	
		    	cout << "\nSeikkan(a), North(b) , South(c), East(d) >>";
		    	cin >> w;
		    	
				
				if(w == 'a')
		    	{
		    	cout << "\nSeikkan have Lay hospital, Kyaw Hospital, and Mya Hospital";
				cout << "\nlay(l) Kyaw(k) Mya(m) :";
				cin >> z;
					if(z == 'l')
					{				
						cout << "\nLay Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
			    	 }
			    	else if( z == 'm')
			    	{
						cout << "\nMya Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
					}
			    	else if( z == 'k')
			    	{
						cout << "\nkyawgyi Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
					}
				}
				if(w == 'b')
				{
		    	cout << "\nNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital";
				cout << "\nAung(a) Kyaw(k) Zaww(z) :";
				cin >> h;
				if(h == 'a')
				{
					cout << "\nAung Hospital";
			    	cout << "\nNorth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    else if(h == 'k')
				{
					cout << "\nkyaw Hospital";
			    	cout << "\nNorth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
			    else if(h == 'z')
				{
					cout << "\nZaww Hospital";
			    	cout << "\nNorth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
				}
				
				if(w == 'c')
				{
		    	cout << "\nSouth have.. Ko hospital, Htun Hospital, and Aung Hospital";
				cout << "\nko(k) Htun(h) Aung(i) :";
				cin >> q;
				if(q == 'k')
				{
					cout << "\nko Hospital";
			    	cout << "\nSouth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    else if(q == 'h')
				{
					cout << "\nHtun Hospital";
			    	cout << "\nSouth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
			    else if(q == 'i')
				{
					cout << "\nAung Hospital";
			    	cout << "\nSouth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
				}
				
				
				if(w == 'd')
				{
		    	cout << "\nEast have.. Htein hospital, Lin Hospital, and Naing Hospital";
				cout << "\nHtein(e) Lin(n) Naing(g) :";
				cin >> htein;
				if(htein == 'e')
				{
					cout << "\nHtein Hospital";
			    	cout << "\nEast Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    else if(htein == 'n')
				{
					cout << "\nlin Hospital";
			    	cout << "\nEast Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
			    else if(htein == 'g')
				{
					cout << "\nNaing Hospital";
			    	cout << "\nEast Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
				}
				
				
				else if (w == 'n')
				{
					cout << "\nsomething wrong Please try again\n";
				}
		       
				cout << "\nDo you wanna booking that(yes,no) \nIf yes(y), Please fill the question::";
			    cin >> z;
		    	
		    	
		       if( z == 'y')
			   {
			   		do{
			   			use.getuser();
			   			use.showuser();
					
					
			   			cout << "another booking(y,n)";
			   			cin >> booking;
					   }while(booking == 'y');
				
			   
			   }
			   else if(z =='f')
			   {			   	
	    		cout << "\nwrong\n";	    		
			   }
			   		        
	    }
	    else 
		{	
		    cout << "\nwrong\n";
		}
		
			cout << "Do you wanna search for the Yangon map(y,n) :";
			cin >> ymap;
	}while(ymap == 'y');
	  
	cout << "Thanks";
    break;
    
        case 2:  
         
            do{
	    	obj2.second(); 			// accessing member function 
		   
		    if(true)
		    {
		    	cout << "\nSeikkan(a), North(b) , South(c), East(d) >>";
		    	cin >> w;
		    	
				
				if(w == 'a')
		    	{
		    	cout << "\nSeikkan have Lay hospital, Kyaw Hospital, and Mya Hospital";
				cout << "\nlay(l) Kyaw(k) Mya(m) :";
				cin >> z;
					if(z == 'l')
					{				
						cout << "\nLay Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
			    	 }
			    	else if( z == 'm')
			    	{
						cout << "\nMya Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
					}
			    	else if( z == 'k')
			    	{
						cout << "\nkyawgyi Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
					}
				}
				if(w == 'b')
				{
		    	cout << "\nNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital";
				cout << "\nAung(a) Kyaw(k) Zaww(z) :";
				cin >> h;
				if(h == 'a')
				{
					cout << "\nAung Hospital";
			    	cout << "\nNorth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    else if(h == 'k')
				{
					cout << "\nkyaw Hospital";
			    	cout << "\nNorth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
			    else if(h == 'z')
				{
					cout << "\nZaww Hospital";
			    	cout << "\nNorth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
				}
				
				else if(w == 'c')
				{
		    	cout << "\nSouth have.. Ko hospital, Htun Hospital, and Aung Hospital";
				cout << "\nko(k) Htun(h) Aung(i) :";
				cin >> q;
				if(q == 'k')
				{
					cout << "\nko Hospital";
			    	cout << "\nSouth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    else if(q == 'h')
				{
					cout << "\nHtun Hospital";
			    	cout << "\nSouth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
			    else if(q == 'i')
				{
					cout << "\nAung Hospital";
			    	cout << "\nSouth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
				}
				
				
				else if(w == 'd')
				{
		    	cout << "\nEast have.. Htein hospital, Lin Hospital, and Naing Hospital";
				cout << "\nHtein(e) Lin(n) Naing(g) :";
				cin >> htein;
				if(htein == 'e')
				{
					cout << "\nHtein Hospital";
			    	cout << "\nEast Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    else if(htein == 'n')
				{
					cout << "\nlin Hospital";
			    	cout << "\nEast Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
			    else if(htein == 'g')
				{
					cout << "\nNaing Hospital";
			    	cout << "\nEast Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
				}
				
				
				else if (w == 'n')
				{
					cout << "\nsomething wrong Please try again\n";
				}
		       
				cout << "Do you wanna booking that(yes,no) \nIf yes, Please fill the question::";
			    cin >> z;
		    	
		    	
		       if( z == 'y')
			   {
			   		
				do{
			   			use.getuser();
			   			use.showuser();
					
					
			   			cout << "another booking(y,n)";
			   			cin >> booking;
					   }while(booking == 'y');
			   
			   }
			   else if(z =='f')
			   {			   	
	    		cout << "\nwrong\n";	    		
			   }
			   		        
	    }
	    else 
		{	
		    cout << "\nwrong\n";
		}
		
			cout << "Do you wanna search for the Mandalay map(y,n) :";
			cin >> mmap;
	}while(mmap == 'y');
	  
	cout << "Thanks";
    break;
    
        case 3:  
        
        do{
	    	obj3.third(); 			// accessing member function 
		   
		    if(true)
		    {
		    	cout << "\nSeikkan(a), North(b) , South(c), East(d) >>";
		    	cin >> w;
		    	
				
				if(w == 'a')
		    	{
		    	cout << "\nSeikkan have Lay hospital, Kyaw Hospital, and Mya Hospital";
				cout << "\nlay(l) Kyaw(k) Mya(m) :";
				cin >> z;
					if(z == 'l')
					{				
						cout << "\nLay Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
			    	 }
			    	else if( z == 'm')
			    	{
						cout << "\nMya Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
					}
			    	else if( z == 'k')
			    	{
						cout << "\nkyawgyi Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
					}
				}
				if(w == 'b')
				{
		    	cout << "\nNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital";
				cout << "\nAung(a) Kyaw(k) Zaww(z) :";
				cin >> h;
				if(h == 'a')
				{
					cout << "\nAung Hospital";
			    	cout << "\nNorth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    else if(h == 'k')
				{
					cout << "\nkyaw Hospital";
			    	cout << "\nNorth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
			    else if(h == 'z')
				{
					cout << "\nZaww Hospital";
			    	cout << "\nNorth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
				}
				
				if(w == 'c')
				{
		    	cout << "\nSouth have.. Ko hospital, Htun Hospital, and Aung Hospital";
				cout << "\nko(k) Htun(h) Aung(i) :";
				cin >> q;
				if(q == 'k')
				{
					cout << "\nko Hospital";
			    	cout << "\nSouth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    else if(q == 'h')
				{
					cout << "\nHtun Hospital";
			    	cout << "\nSouth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
			    else if(q == 'i')
				{
					cout << "\nAung Hospital";
			    	cout << "\nSouth Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
				}
				
				
				else if(w == 'd')
				{
		    	cout << "\nEast have.. Htein hospital, Lin Hospital, and Naing Hospital";
				cout << "\nHtein(e) Lin(n) Naing(g) :";
				cin >> htein;
				if(htein == 'e')
				{
					cout << "\nHtein Hospital";
			    	cout << "\nEast Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    else if(htein == 'n')
				{
					cout << "\nlin Hospital";
			    	cout << "\nEast Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
			    else if(htein == 'g')
				{
					cout << "\nNaing Hospital";
			    	cout << "\nEast Dagon Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
			    }
			    
				}
				
				
				else if (w == 'n')
				{
					cout << "\nsomething wrong Please try again\n";
				}
		       
				cout << "Do you wanna booking that(yes,no) \nIf yes, Please fill the question::";
			    cin >> z;
		    	
		    	
		       if( z == 'y')
			   {
			   		
				do{
			   			use.getuser();
			   			use.showuser();
					
					
			   			cout << "another booking(y,n)";
			   			cin >> booking;
					   }while(booking == 'y');
			   
			   }
			   else if(z =='f')
			   {			   	
	    		cout << "\nwrong\n";	    		
			   }
			   		        
	    }
	    else 
		{	
		    cout << "\nwrong\n";
		}
		
			cout << "\nDo you wanna search for Bago map(y,n) :";
			cin >> bmap;
	}while(bmap == 'y');
	  
	cout << "Thanks";
    break;
        default:  
           cout << "\n Error \n Only Choice 1,2,3\n";  
            break;   
    } 
    
    cout << "\nDO you wanna search in yangon, Mandalay, Bago(y,n) :";
    cin >> thewhole;
   }while(thewhole == 'y');
   cout << "\n// \t\t\tThank for your using this //";
return 0; 
} 



