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
    string str3("\n\tPlease Write (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl; 
	  
    cout << "\tEnter :";
    cin >> str3; 
    
   	cout << "\n\n\t\t...In " << str3 << "...\n";
   	cout << "\n\t==================================";
    } 
    void second()
    {
    string str1 = "\n\t\t\t\t  Welcome to Mandalay";   
    string str2("\n\t\t\t\tWhere do you wanna go?"); 
    string str3("\n\tPlease Write (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "\tEnter :";
    cin >> str3;
   	
   	cout << "\n\n\t\t...In " << str3 << "...\n";
   	cout << "\n\t==================================";
	}
	void third()
	{
	string str1 = "\n\n\t\t\t\t\t   Welcome to Bago";   
    string str2("\n\n\t\t\t\t\tWhere do you wanna go?"); 
    string str3("\n\n\t...Please Write (East_District, West_District, North_District or South_District)... ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "\n\tEnter :";
    cin >> str3;
   	
   	cout << "\n\n\t\t...In " << str3 << "...\n";
   	cout << "\t==================================";
		
	}
};

class Place{
	
	public:
	void line()
	{
		cout << "\n\t==================================";
	}
	void lay()
	{
			cout << "\n\n\t-Lay Hospital";
			cout << "\n\n\t-Dagon Seikkan NewTownship";
			cout << "\n\n\t-No.2 Main street road ";
			cout << "\n\n\t-layDountkan";
			line();
			cout << endl;	
	}
	void kyaw()
	{
		cout << "\n\n\t-kyawgyi Hospital";
		cout << "\n\n\t-Dagon Seikkan NewTownship";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
	void mya()
	{
		cout << "\n\n\t-Mya Hospital";
		cout << "\n\n\t-Dagon Seikkan NewTownship";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
	void aung()
	{
		cout << "\n\n\t-Aung Hospital";
		cout << "\n\n\t-North Dagon Township";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
	void kk()
	{
		cout << "\n\n\t-kyaw Hospital";
		cout << "\n\n\t-North Dagon Township";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
	void zaww()
	{
		cout << "\n\n\t-Zaww Hospital";
		cout << "\n\n\t-North Dagon Township";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
	void ko()
	{
		cout << "\n\n\t-ko Hospital";
		cout << "\n\n\t-South Dagon Township";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
	void htun()
	{
		cout << "\n\n\t-Htun Hospital";
		cout << "\n\n\t-South Dagon Township";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
	void au()
	{
		cout << "\n\n\t-Aung Hospital";
		cout << "\n\n\t-South Dagon Township";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
	void htein()
	{
		cout << "\n\n\t-Htein Hospital";
		cout << "\n\n\t-East Dagon Township";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;	
	}
	void lin()
	{
		cout << "\n\n\t-lin Hospital";
		cout << "\n\n\t-East Dagon Township";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
	void naing()
	{
		cout << "\n\n\t-Naing Hospital";
		cout << "\n\n\t-East Dagon Township";
		cout << "\n\n\t-No.2 Main street road ";
		cout << "\n\n\t-layDountkan";
		line();
		cout << endl;
	}
		
};



	
class Calculator{
	protected:
		char name[20]; 
		char info[20];
	    char adress[50];
	    char Ph[50];
	    char blar[50];
	    char name1[20];
	public:
		void getuser()
		{
			cout << "\n\n\tPlease fill...";
			cin.getline(blar,50); 
			cout << "\n\n\tEnter Your Name::"; 
		    cin.getline(name, 20); 
		    cout << "\n\n\tEnter your adress ::";
		    cin.getline(adress,50);
		    cout << "\n\n\tEnter your Ph ::";
		    cin.getline(Ph,50);
		}
		void showuser()
		{
			cout << "\n\n\tYour Name is:: " << name; 
		    cout << "\n\n\tYour adress is:: " << adress; 
		    cout << "\n\n\tYour Ph.No is:: " << Ph; 
		    cout << endl;
		}
		string getname()
		{
			return name;
		}
		void showuser_table()
		{
			cout<<"\t"<<name<<"\t\t\t"<<adress<<"\t\t\t"<<Ph<<"\n\n";
			
		}
	
		
};

void adduser();
void shuser();
void searchuser();
void edituser();
void Title();
void displayuser_table();
void deleteuserinfo();
void references();
void search();
void search2();
void search3();
void search4();
	
int main() 
{ 
	getch();
    int n;
    string kk;
    char y, z, w, f, h, q, htein, booking ;
   	char ymap, mmap, bmap;
   	char thewhole, info;
    Back pers; 
    Place hospital;
    Calculator use;
	int x ;
	
	do{	
		cout << "\n\t\t\tEnter number ::(Yangon(1), Mandalay(2), Bago(3)) :: ";
		cin >> x;
		cout <<"\t\t-------------------------------------------------------------------\n\n";
	 
 
    switch (x) 
    { 
        case 1:  
        
           do{
	    		pers.printname(); 			// accessing member function 
		   
		    if(true)
		    {	
		    	cout << "\n\n\n\tSeikkan(a), North(b) , South(c), East(d) >>";
		    	cin >> w;
		    	
				
				if(w == 'a')
		    	{
		    		cout << "\n\t\t  ---------//---------";
			    	cout << "\n\n\n\tSeikkan have (Lay hospital, Kyaw Hospital, and Mya Hospital) \n\n \t..Please choice.. ";
			    	cout << "\n\t**Only write one word**";
					cout << "\n\n\tlay(l) Kyaw(k) Mya(m) :";
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
					else
					{
						cout << "\n\t\tError...\n";
						cout << "\tPlease try again...\n";
						cout << "\n\t==================================";
						search();
					}
				}
				if(w == 'b')
				{
					cout << "\n\t\t  ---------//---------";
			    	cout << "\n\n\n\tNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital \n \t..Please choice.. ";
				   	cout << "\n\t**Only write one word**";
					cout << "\n\n\n\tAung(a) Kyaw(k) Zaww(z) :";
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
				    else
					{
						cout << "\n\t\tError...\n";
						cout << "\tPlease try again...\n";
						cout << "\n\t==================================";
						search2();
					}
			    
				}
				
				if(w == 'c')
				{
		    		cout << "\n\t\t  ---------//---------";
				   	cout << "\n\n\n\tSouth have.. Ko hospital, Htun Hospital, and Aung Hospital \n \t..Please choice.. ";
				   	cout << "\n\t**Only write one word**";
					cout << "\n\n\n\tko(k) Htun(h) Aung(i) :";
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
					else
					{
						cout << "\n\t\tError...\n";
						cout << "\n\t   Please try again...";
						cout << "\n\t==================================";
						cout << endl;
						search3();
					}
				}
								
				if(w == 'd')
				{
			    	cout << "\n\t\t  ---------//---------";
				   	cout << "\n\n\n\tEast have.. Htein hospital, Lin Hospital, and Naing Hospital \n \t..Please choice.. ";
				   	cout << "\n\t**Only write one word**";
					cout << "\n\n\n\tHtein(e) Lin(n) Naing(g) :";
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
				    else
					{
						cout << "\n\t\tError...\n";
						cout << "\n\t   Please try again...";
						cout << "\n\t==================================";
						cout << endl;
						search4();
					}
			    
				}
				
				
				else if (w == 'n')
				{
					cout << "\n\tsomething wrong Please try again\n";
				}
		       
					cout << "\n\tDo you wanna booking that(yes,no)(y,n) \n\tIf yes(y), Please fill the question::";
				    cin >> z;
		    	
		    	
		       if( z == 'y')
			   {
			   		do{
			   			adduser();			   								
			   			cout << "\n\tAnother booking(y,n)";
			   			cin >> booking;	   					
					   }while(booking == 'y');
							   
			   }
			   else if(z =='f')
			   {			   	
	    		cout << "\n\twrong\n";	    		
			   }
			   		        
	    }
	    else 
		{	
		    cout << "\n\twrong\n";
		}
			cout <<"\n\t-------------------------//---------------------------------";
			cout << "\n\tDo you wanna search for the Yangon map(y,n) :";
			cin >> ymap;
			cout <<"\n\t-------------------------//---------------------------------\n\n";
			
	}while(ymap == 'y');
	  
		cout << "\n\t====================Ok LetGo!to next step====================";
		cin.get();
		cout << "\n\n\t>What do you wanna prepare?:\n\t>Do you wanna know in your information?(y,n) : ";
		cin >> info;
	if(info == 'y')
	{
		cout << endl;
		Title();
		cout <<"\n\t";
	}

    break;
    
        case 2:  
        
           do{
	    		pers.second(); 			// accessing member function 
		   
		    if(true)
		    {	
		    	cout << "\n\n\n\tSeikkan(a), North(b) , South(c), East(d) >>";
		    	cin >> w;
		    	
				
				if(w == 'a')
		    	{
		    		cout << "\n\t\t  ---------//---------";
			    	cout << "\n\n\n\tSeikkan have (Lay hospital, Kyaw Hospital, and Mya Hospital) \n\n \t..Please choice.. ";
			    	cout << "\n\t**Only write one word**";
					cout << "\n\n\tlay(l) Kyaw(k) Mya(m) :";
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
					else
					{
						cout << "\n\t\tError...\n";
						cout << "\tPlease try again...\n";
						cout << "\n\t==================================";
						search();
					}
				}
				if(w == 'b')
				{
					cout << "\n\t\t  ---------//---------";
			    	cout << "\n\n\n\tNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital \n \t..Please choice.. ";
				   	cout << "\n\t**Only write one word**";
					cout << "\n\n\n\tAung(a) Kyaw(k) Zaww(z) :";
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
				    else
					{
						cout << "\n\t\tError...\n";
						cout << "\tPlease try again...\n";
						cout << "\n\t==================================";
						search2();
					}
			    
				}
				
				if(w == 'c')
				{
		    		cout << "\n\t\t  ---------//---------";
				   	cout << "\n\n\n\tSouth have.. Ko hospital, Htun Hospital, and Aung Hospital \n \t..Please choice.. ";
				   	cout << "\n\t**Only write one word**";
					cout << "\n\n\n\tko(k) Htun(h) Aung(i) :";
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
					else
					{
						cout << "\n\t\tError...\n";
						cout << "\n\t   Please try again...";
						cout << "\n\t==================================";
						cout << endl;
						search3();
					}
				}
								
				if(w == 'd')
				{
			    	cout << "\n\t\t  ---------//---------";
				   	cout << "\n\n\n\tEast have.. Htein hospital, Lin Hospital, and Naing Hospital \n \t..Please choice.. ";
				   	cout << "\n\t**Only write one word**";
					cout << "\n\n\n\tHtein(e) Lin(n) Naing(g) :";
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
				    else
					{
						cout << "\n\t\tError...\n";
						cout << "\n\t   Please try again...";
						cout << "\n\t==================================";
						cout << endl;
						search4();
					}
			    
				}
				
				
				else if (w == 'n')
				{
					cout << "\n\tsomething wrong Please try again\n";
				}
		       
					cout << "\n\tDo you wanna booking that(yes,no)(y,n) \n\tIf yes(y), Please fill the question::";
				    cin >> z;
		    	
		    	
		       if( z == 'y')
			   {
			   		do{
			   			adduser();			   								
			   			cout << "\n\tAnother booking(y,n)";
			   			cin >> booking;	   					
					   }while(booking == 'y');
							   
			   }
			   else if(z =='f')
			   {			   	
	    		cout << "\n\twrong\n";	    		
			   }
			   		        
	    }
	    else 
		{	
		    cout << "\n\twrong\n";
		}
			cout <<"\n\t-------------------------//---------------------------------";
			cout << "\n\tDo you wanna search for the Mandalay map(y,n) :";
			cin >> mmap;
			cout <<"\n\t-------------------------//---------------------------------\n\n";
			
	}while(mmap == 'y');
	  
		cout << "\n\t====================Ok LetGo!to next step====================";
		cin.get();
		cout << "\n\n\t>What do you wanna prepare?:\n\t>Do you wanna know in your information?(y,n) : ";
		cin >> info;
	if(info == 'y')
	{
		cout << endl;
		Title();
		cout <<"\n\t";
	}

    break;
    
        case 3:  
        
           do{
	    		pers.third(); 			// accessing member function 
		   
		    if(true)
		    {	
		    	cout << "\n\n\n\tSeikkan(a), North(b) , South(c), East(d) >>";
		    	cin >> w;
		    	
				
				if(w == 'a')
		    	{
		    		cout << "\n\t\t  ---------//---------";
			    	cout << "\n\n\n\tSeikkan have (Lay hospital, Kyaw Hospital, and Mya Hospital) \n\n \t..Please choice.. ";
			    	cout << "\n\t**Only write one word**";
					cout << "\n\n\tlay(l) Kyaw(k) Mya(m) :";
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
					else
					{
						cout << "\n\t\tError...\n";
						cout << "\tPlease try again...\n";
						cout << "\n\t==================================";
						search();
					}
				}
				if(w == 'b')
				{
					cout << "\n\t\t  ---------//---------";
			    	cout << "\n\n\n\tNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital \n \t..Please choice.. ";
				   	cout << "\n\t**Only write one word**";
					cout << "\n\n\n\tAung(a) Kyaw(k) Zaww(z) :";
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
				    else
					{
						cout << "\n\t\tError...\n";
						cout << "\tPlease try again...\n";
						cout << "\n\t==================================";
						search2();
					}
			    
				}
				
				if(w == 'c')
				{
		    		cout << "\n\t\t  ---------//---------";
				   	cout << "\n\n\n\tSouth have.. Ko hospital, Htun Hospital, and Aung Hospital \n \t..Please choice.. ";
				   	cout << "\n\t**Only write one word**";
					cout << "\n\n\n\tko(k) Htun(h) Aung(i) :";
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
					else
					{
						cout << "\n\t\tError...\n";
						cout << "\n\t   Please try again...";
						cout << "\n\t==================================";
						cout << endl;
						search3();
					}
				}
								
				if(w == 'd')
				{
			    	cout << "\n\t\t  ---------//---------";
				   	cout << "\n\n\n\tEast have.. Htein hospital, Lin Hospital, and Naing Hospital \n \t..Please choice.. ";
				   	cout << "\n\t**Only write one word**";
					cout << "\n\n\n\tHtein(e) Lin(n) Naing(g) :";
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
				    else
					{
						cout << "\n\t\tError...\n";
						cout << "\n\t   Please try again...";
						cout << "\n\t==================================";
						cout << endl;
						search4();
					}
			    
				}
				
				
				else if (w == 'n')
				{
					cout << "\n\tsomething wrong Please try again\n";
				}
		       
					cout << "\n\tDo you wanna booking that(yes,no)(y,n) \n\tIf yes(y), Please fill the question::";
				    cin >> z;
		    	
		    	
		       if( z == 'y')
			   {
			   		do{
			   			adduser();			   								
			   			cout << "\n\tAnother booking(y,n)";
			   			cin >> booking;	   					
					   }while(booking == 'y');
							   
			   }
			   else if(z =='f')
			   {			   	
	    		cout << "\n\twrong\n";	    		
			   }
			   		        
	    }
	    else 
		{	
		    cout << "\n\twrong\n";
		}
			cout <<"\n\t-------------------------//---------------------------------";
			cout << "\n\tDo you wanna search for the Bago map(y,n) :";
			cin >> bmap;
			cout <<"\n\t-------------------------//---------------------------------\n\n";
			
	}while(bmap == 'y');
	  
		cout << "\n\t====================Ok LetGo!to next step====================";
		cin.get();
		cout << "\n\n\t>What do you wanna prepare?:\n\t>Do you wanna know in your information?(y,n) : ";
		cin >> info;
	if(info == 'y')
	{
		cout << endl;
		Title();
		cout <<"\n\t";
	}

    break;
	    
    default:  
        	cout << "\n\t\t\t    Error... \n\t\t\t Only Choice 1,2,3\n";  
        	break;   
    } 
	
	cout << "\n\t==============================================================\n";    
    cout << "\n\tDO you wanna search in yangon, Mandalay, Bago(y,n) :";
    cin >> thewhole;
   }while(thewhole == 'y');
	cout << "\n\n \t\t\t// Thank for your using this //";
   
	getch();
	references(); 
	getch();
	return 0; 
} 
void Title()
{
	int n;
	do
	{
		cout << "\n\tInformation Menu\n";
		cout << "\t=====================\n\n";
		cout << "\t1:Add User information\n\n";
		cout << "\t2:Show User information\n\n";
		cout << "\t3:Edit User information\n\n";
		cout << "\t4:Deleted User information\n\n";
		cout << "\t5:Display_User information\n\n";		
		cout << "\n\tEnter option(1-5)\t(6) exit :: ";		
		cin >> n;
		switch(n)
		{
			case 1:adduser();cin.get();break;
			case 2:searchuser();cin.get();break;
			case 3:edituser();cin.get();break;
			case 4:deleteuserinfo();cin.get();break;
			case 5:displayuser_table();cin.get();break;					
			case 6:break;
			default: Title();
		}
	}while(n != 6);
}

void shuser()
	{
	Calculator cal;
	ifstream infile;
	infile.open("Calculator.txt",ios::binary);
	infile.seekg(0,ios::end);
	int pos = infile.tellg();
	int num = pos/sizeof(Calculator);
	if(num == 0)
	{
		cout<<"\n\tNo data to show..\n";
		cin.get();
		return;
	}
	infile.close();
	cal.showuser();
	}

void adduser()
	{
	char ch;
	Calculator cal;
	ofstream outfile;
	outfile.open("Calculator.txt",ios::binary|ios::app);
	cout << "\n\t\t\t------\n";
	cout << "\n\t\t//Adding Information//\n";
	
	cal.getuser();
	outfile.write((char*)&cal,sizeof(cal));	
			
	cout << "\n\tUser data have added into the file.";
	cout << "\n\t=======================================";
	cin.get();
	}
	
void searchuser()
{
	char name[80];
	Calculator cal;
	ifstream infile("Calculator.txt",ios::binary);
	infile.seekg(0,ios::end);
	int pos = infile.tellg();
	int num = pos/sizeof(Calculator);
	infile.seekg(0);
	if(num == 0)
	{
		cout<<"\n\tNo record to search..\n";
		cin.get();
		return;
	}
	else
	{
		cout<<"\n\n\tEnter Name to search: ";
		cin >> name;
		bool exist=false;
		while(infile.read((char*)&cal,sizeof(cal)))
		{
			if(cal.getname() == name)
			{
				cout << "\n\t================";
				cal.showuser();
				cout << "\n\t================";
				exist=true;
			}
		}
		cout << ((exist)?"\n\n\t\"Exit.\"\n":"\n\n\t\"Does not Exist.\"\n");
	}
	infile.close();
	cin.get();
}

void edituser()
{
	int k,counter = 0;
	Calculator cal, calc;
	ifstream infile("Calculator.txt",ios::binary|ios::app);
	infile.seekg(0,ios::end);
	int pos = infile.tellg();
	int num = pos/sizeof(Calculator);
	if(num == 0)
	{
		cout<<"\n\tNo prepare..\n";
		cin.get();
		return;
	}
	displayuser_table();
	cout << "\n\tEnter Number : ";
	cin >> k;
	if(k>num)
	{
		cout << "\n\tWrong Number..\n" << num;
		cin >> k;
	}
	infile.seekg(0);
	calc.getuser();
	ofstream outfile("Temp.txt",ios::binary|ios::app);
	while(infile.read((char*)&cal,sizeof(cal)))
	{
		counter++;
		if(counter == k)
		{
			outfile.write((char*)&calc,sizeof(calc));	
		}
		else
		{ 
			outfile.write((char*)&cal,sizeof(cal));
		}
	}
	cout<<"\n\n\tHave been prepared..\n";
	infile.close();
	outfile.close();
	remove("Calculator.txt");
	rename("Temp.txt","Calculator.txt");
	cin.get();
}

void displayuser_table()
{
	int counter = 0;
	cout << "\n\tAll User Information\n";
	cout << "\t================================================================";
	cout << "\n\tNo."<<"\t"<<"Name"<<"\t\t\t"<<"Adress"<<"\t\t\t"<<"Ph.No"<<endl;
	cout << "\t================================================================\n\n";
	
	Calculator cal;
	ifstream infile;
	infile.open("Calculator.txt",ios::binary);
	
	while(infile.read((char*)&cal,sizeof(cal)))
	{
		counter++;
		cout << "\t" << counter;
		cal.showuser_table();
	}
	cout << "\t================================================================\n\n";
	infile.close();
	cin.get(); 
}

void deleteuserinfo()
{
	int k;
	Calculator cal;
	ifstream inFile;
	inFile.open("Calculator.txt",ios::binary);
	inFile.seekg(0,ios::end);
	int pos = inFile.tellg();
	int num = pos/sizeof(Calculator);
	if( num == 0)
	{
		cout <<  "\n\tNo delete..\n";
		cin.get();
		return;
	}
	if(!inFile)
	{
		cout<< "File could not be open !! Press any Key...";
		cin.get();
		return;
	}
	displayuser_table();
	cout << "\n\tEnter Number: ";
	cin >> k;
	if(k>num)
	{
		cout << "\n\tWrong Number.. :" << num;
		cin >> k;
	}
	ofstream outFile;
	outFile.open("Temp.txt",ios::binary);
	inFile.seekg(0,ios::beg);
	int counter=0;
	while(inFile.read(reinterpret_cast<char*> (&cal), sizeof(Calculator)))
	{
		counter++;
		if(counter != k)
		{
			outFile.write(reinterpret_cast<char*> (&cal), sizeof(Calculator));
		}
	}
	outFile.close();
	inFile.close();
	remove("Calculator.txt");
	rename("Temp.txt","Calculator.txt");
	cout << "\n\n\t Deleted ..";
	cin.get();
}
void search()
{
	char w,z= 50;
	Place hospital;
	cout << "\n\n\tSeikkan(a), North(b) , South(c), East(d) >>";
	cin >> w;
	if(w == 'a')
    	{
    		cout << "\n\t\t  ---------//---------";
		   	cout << "\n\n\n\tSeikkan have (Lay hospital, Kyaw Hospital, and Mya Hospital) \n \t..Please choice.. ";
		   	cout << "\n\t**Only write one word**";
			cout << "\n\n\n\tlay(l) Kyaw(k) Mya(m) :";
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
			else
				{
					cout << "\n\t\tError...\n";
					cout << "\n\t   Please try again...";
					cout << "\n\t==================================";
					cout << endl;
					search();
				}
		}
}

void search2()
{
	char w,h;
	Place hospital;
	cout << "\n\n\tSeikkan(a), North(b) , South(c), East(d) >>";
	cin >> w;
	if(w == 'b')
    	{
    		cout << "\n\t\t  ---------//---------";
		   	cout << "\n\n\n\tNorth have.. Aung hospital, Kyaw Hospital, and Zaww Hospital \n \t..Please choice.. ";
		   	cout << "\n\t**Only write one word**";
			cout << "\n\n\n\tAung(a) Kyaw(k) Zaww(z) :";
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
			else
			{
			cout << "\n\t\tError...\n";
			cout << "\n\t   Please try again...";
			cout << "\n\t==================================";
			cout << endl;
			search2();
			}
		}
}

void search3()
{
	char w,q;
	Place hospital;
	cout << "\n\n\tSeikkan(a), North(b) , South(c), East(d) >>";
	cin >> w;
	if(w == 'c')
    	{
    		cout << "\n\t\t  ---------//---------";
		   	cout << "\n\n\n\tSouth have.. Ko hospital, Htun Hospital, and Aung Hospital \n \t..Please choice.. ";
		   	cout << "\n\t**Only write one word**";
			cout << "\n\n\n\tko(k) Htun(h) Aung(i) :";
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
			else
			{
			cout << "\n\t\tError...\n";
			cout << "\n\t   Please try again...";
			cout << "\n\t==================================";
			cout << endl;
			search3();
			}
		}
}

void search4()
{
	char w,htein;
	Place hospital;
	cout << "\n\n\tSeikkan(a), North(b) , South(c), East(d) >>";
	cin >> w;
	if(w == 'd')
    	{
    		cout << "\n\t\t  ---------//---------";
		   	cout << "\n\n\n\tEast have.. Htein hospital, Lin Hospital, and Naing Hospital \n \t..Please choice.. ";
		   	cout << "\n\t**Only write one word**";
			cout << "\n\n\n\tHtein(e) Lin(n) Naing(g) :";
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
			else
			{
				cout << "\n\t\tError...\n";
				cout << "\n\t   Please try again...";
				cout << "\n\t==================================";
				cout << endl;
				search4();
			}
		}
}

void references()
{
	cout << "\n\n\n\t\t\t---Project References && Thank you letter---\n" ;
	cout << "\t\t\t\t=========================\n"; getch();
	cout << "\n\n\t\t\t-To google ";
	cout << "\n\n\t\t\t-To geek for geeks";
	cout << "\n\n\t\t\t-To youtube";
	cout << "\n\n\t\t\t-To C , C++ OOP PDF ";
	cout << "\n\n\t\t\t-To Ko Htun Aung Kyaw";
	cout << "\n\n\t\t\t-To and so on...\n";
}




