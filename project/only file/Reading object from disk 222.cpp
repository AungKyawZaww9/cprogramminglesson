#include<iostream>
#include<fstream>
#include<cstring>
#include<conio.h>
using namespace std; 
 
class Back
{ 
     
    public: 
    char a,b,c,d;
  
    
    void printname() 
    { 
    string str1 = "\n\t\t\t\t   Welcome to Yangon";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\nPlease Write (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "\nEnter :";
    cin >> str3;
   	
   	cout << "\n\n\t...In " << str3 << "...";
    } 
    void second()
    {
    string str1 = "\n\t\t\t\t  Welcome to Mandalay";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\nPlease Write (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "\nEnter :";
    cin >> str3;
   	
   	cout << "\n\n\t...In " << str3 << "...";
	}
	void third()
	{
	string str1 = "\n\t\t\t\t   Welcome to Bago";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\n...Please Write (East_District, West_District, North_District or South_District)... ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "\nEnter :";
    cin >> str3;
   	
   	cout << "\n\n\t...In " << str3 << "...";
		
	}
};

class Place{
	
	public:
	void lay()
	{
			cout << "\nLay Hospital";
			cout << "\nDagon Seikkan NewTownship";
			cout << "\nNo.2 Main street road ";
			cout << "\nlayDountkan";
			cout << endl;	
	}
	void kyaw()
	{
		cout << "\nkyawgyi Hospital";
		cout << "\nDagon Seikkan NewTownship";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
	void mya()
	{
		cout << "\nMya Hospital";
		cout << "\nDagon Seikkan NewTownship";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
	void aung()
	{
		cout << "\nAung Hospital";
		cout << "\nNorth Dagon Township";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
	void kk()
	{
		cout << "\nkyaw Hospital";
		cout << "\nNorth Dagon Township";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
	void zaww()
	{
		cout << "\nZaww Hospital";
		cout << "\nNorth Dagon Township";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
	void ko()
	{
		cout << "\nko Hospital";
		cout << "\nSouth Dagon Township";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
	void htun()
	{
		cout << "\nHtun Hospital";
		cout << "\nSouth Dagon Township";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
	void au()
	{
		cout << "\nAung Hospital";
		cout << "\nSouth Dagon Township";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
	void htein()
	{
		cout << "\nHtein Hospital";
		cout << "\nEast Dagon Township";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;	
	}
	void lin()
	{
		cout << "\nlin Hospital";
		cout << "\nEast Dagon Township";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
	void naing()
	{
		cout << "\nlin Hospital";
		cout << "\nEast Dagon Township";
		cout << "\nNo.2 Main street road ";
		cout << "\nlayDountkan";
		cout << endl;
	}
		
};



	
class Calculator{
	private:
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
    Back pers; 
    Place hospital;
    Calculator use;
	int x ;
	
	ifstream infile("Person.txt", ios::binary);
	infile.read(reinterpret_cast <char*> (&pers), sizeof(pers));
	
	do{
	
	cout << "\nEnter number ::(Yangon(1), Mandalay(2), Bago(3)) ::";
	cin >> x;
 
    switch (x) 
    { 
        case 1:  
        
           do{
	    	pers.printname(); 			// accessing member function 
		   
		    if(true)
		    {	
		    	cout << "\nSeikkan(a), North(b) , South(c), East(d) >>";
		    	cin >> w;
		    	
				
				if(w == 'a')
		    	{
		    	cout << "\nSeikkan have (Lay hospital, Kyaw Hospital, and Mya Hospital) \n \t..Please choice.. ";
				cout << "\nlay(l) Kyaw(k) Mya(m) :";
				cin >> z;
					if(z == 'l')
					{				
						hospital.lay();
			    	 }
			    	else if( z == 'm')
			    	{
						hospital.mya();
					}
			    	else if( z == 'k')
			    	{
						hospital.kyaw();
					}
				}
				if(w == 'b')
				{
		    	cout << "\nNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital";
				cout << "\nAung(a) Kyaw(k) Zaww(z) :";
				cin >> h;
				if(h == 'a')
				{
					hospital.aung();
			    }
			    else if(h == 'k')
				{
					hospital.kk();
			    }
			    
			    else if(h == 'z')
				{
					hospital.zaww();
			    }
			    
				}
				
				if(w == 'c')
				{
		    	cout << "\nSouth have.. Ko hospital, Htun Hospital, and Aung Hospital";
				cout << "\nko(k) Htun(h) Aung(i) :";
				cin >> q;
				if(q == 'k')
				{
					hospital.ko();
			    }
			    else if(q == 'h')
				{
					hospital.htun();
			    }
			    
			    else if(q == 'i')
				{
					hospital.au();
			    }
			    
				}
				
				
				if(w == 'd')
				{
		    	cout << "\nEast have.. Htein hospital, Lin Hospital, and Naing Hospital";
				cout << "\nHtein(e) Lin(n) Naing(g) :";
				cin >> htein;
				if(htein == 'e')
				{
					hospital.htein();
			    }
			    else if(htein == 'n')
				{
					hospital.lin();
			    }
			    
			    else if(htein == 'g')
				{
					hospital.naing();
			    }
			    
				}
				
				
				else if (w == 'n')
				{
					cout << "\nsomething wrong Please try again\n";
				}
		       
				cout << "\nDo you wanna booking that(yes,no)(y,n) \nIf yes(y), Please fill the question::";
			    cin >> z;
		    	
		    	
		       if( z == 'y')
			   {
			   		do{
			   			use.getuser();
			   			use.showuser();					
			   			cout << "\nanother booking(y,n)";
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
	    	pers.second(); 			// accessing member function 
		   
		    if(true)
		    {	
		    	cout << "\nSeikkan(a), North(b) , South(c), East(d) >>";
		    	cin >> w;
		    	
				
				if(w == 'a')
		    	{
		    	cout << "\nSeikkan have (Lay hospital, Kyaw Hospital, and Mya Hospital) \n \t..Please choice.. ";
				cout << "\nlay(l) Kyaw(k) Mya(m) :";
				cin >> z;
					if(z == 'l')
					{				
						hospital.lay();
			    	 }
			    	else if( z == 'm')
			    	{
						hospital.mya();
					}
			    	else if( z == 'k')
			    	{
						hospital.kyaw();
					}
				}
				if(w == 'b')
				{
		    	cout << "\nNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital";
				cout << "\nAung(a) Kyaw(k) Zaww(z) :";
				cin >> h;
				if(h == 'a')
				{
					hospital.aung();
			    }
			    else if(h == 'k')
				{
					hospital.kk();
			    }
			    
			    else if(h == 'z')
				{
					hospital.zaww();
			    }
			    
				}
				
				if(w == 'c')
				{
		    	cout << "\nSouth have.. Ko hospital, Htun Hospital, and Aung Hospital";
				cout << "\nko(k) Htun(h) Aung(i) :";
				cin >> q;
				if(q == 'k')
				{
					hospital.ko();
			    }
			    else if(q == 'h')
				{
					hospital.htun();
			    }
			    
			    else if(q == 'i')
				{
					hospital.au();
			    }
			    
				}
				
				
				if(w == 'd')
				{
		    	cout << "\nEast have.. Htein hospital, Lin Hospital, and Naing Hospital";
				cout << "\nHtein(e) Lin(n) Naing(g) :";
				cin >> htein;
				if(htein == 'e')
				{
					hospital.htein();
			    }
			    else if(htein == 'n')
				{
					hospital.lin();
			    }
			    
			    else if(htein == 'g')
				{
					hospital.naing();
			    }
			    
				}
				
				
				else if (w == 'n')
				{
					cout << "\nsomething wrong Please try again\n";
				}
		       
				cout << "\nDo you wanna booking that(yes,no)(y,n) \nIf yes(y), Please fill the question::";
			    cin >> z;
		    	
		    	
		       if( z == 'y')
			   {
			   		do{
			   			use.getuser();
			   			use.showuser();					
			   			cout << "\nanother booking(y,n)";
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
    
        case 3:  
        
        do{
	    	pers.third(); 			// accessing member function 
		   
		    if(true)
		    {	
		    	cout << "\nSeikkan(a), North(b) , South(c), East(d) >>";
		    	cin >> w;
		    	
				
				if(w == 'a')
		    	{
		    	cout << "\nSeikkan have (Lay hospital, Kyaw Hospital, and Mya Hospital) \n \t..Please choice.. ";
				cout << "\nlay(l) Kyaw(k) Mya(m) :";
				cin >> z;
					if(z == 'l')
					{				
						hospital.lay();
			    	 }
			    	else if( z == 'm')
			    	{
						hospital.mya();
					}
			    	else if( z == 'k')
			    	{
						hospital.kyaw();
					}
				}
				if(w == 'b')
				{
		    	cout << "\nNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital";
				cout << "\nAung(a) Kyaw(k) Zaww(z) :";
				cin >> h;
				if(h == 'a')
				{
					hospital.aung();
			    }
			    else if(h == 'k')
				{
					hospital.kk();
			    }
			    
			    else if(h == 'z')
				{
					hospital.zaww();
			    }
			    
				}
				
				if(w == 'c')
				{
		    	cout << "\nSouth have.. Ko hospital, Htun Hospital, and Aung Hospital";
				cout << "\nko(k) Htun(h) Aung(i) :";
				cin >> q;
				if(q == 'k')
				{
					hospital.ko();
			    }
			    else if(q == 'h')
				{
					hospital.htun();
			    }
			    
			    else if(q == 'i')
				{
					hospital.au();
			    }
			    
				}
				
				
				if(w == 'd')
				{
		    	cout << "\nEast have.. Htein hospital, Lin Hospital, and Naing Hospital";
				cout << "\nHtein(e) Lin(n) Naing(g) :";
				cin >> htein;
				if(htein == 'e')
				{
					hospital.htein();
			    }
			    else if(htein == 'n')
				{
					hospital.lin();
			    }
			    
			    else if(htein == 'g')
				{
					hospital.naing();
			    }
			    
				}
				
				
				else if (w == 'n')
				{
					cout << "\nsomething wrong Please try again\n";
				}
		       
				cout << "\nDo you wanna booking that(yes,no)(y,n) \nIf yes(y), Please fill the question::";
			    cin >> z;
		    	
		    	
		       if( z == 'y')
			   {
			   		do{
			   			use.getuser();
			   			use.showuser();					
			   			cout << "\nanother booking(y,n)";
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
        default:  
        	cout << "\n Error \n Only Choice 1,2,3\n";  
        	break;   
    } 
    
    cout << "\nDO you wanna search in yangon, Mandalay, Bago(y,n) :";
    cin >> thewhole;
   }while(thewhole == 'y');
   cout << "\n \t\t\t// Thank for your using this //";
   
   getch();
return 0; 
} 



