#include <iostream> 
#include<conio.h>
#include<string>
using namespace std; 
const int SIZE = 1; 
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

struct part 
	{
		char Username[50]; 
		char User_Adress[50]; 
		char NRC_number[50]; 
	};
  
int main() 

	{ 
	getch();
    int n;
    string kk;
	part apart[SIZE]; 
    char y,z,w,f,h,q,test, htein;
   	
    Back obj1, obj2, obj3; 
	int x ;
	char d;
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
			   		
				for(n=0; n<SIZE; n++) 
					{
					cout << endl;
					cout << "Enter Customername: ";
					cin >> apart[n].Username;
					cout << "Enter Customer_Adress: ";
					cin >> apart[n].User_Adress; 
					cout << "Enter Customer NRC_number: ";
					cin >> apart[n].NRC_number; 
					}
					cout << endl;
					for(n=0; n<SIZE; n++) 
					{
					
					cout << "Customer name: " << apart[n].Username << endl;
					cout << "Customer_Adress: " << apart[n].User_Adress << endl;
					cout << "Customer_NRC_number: " << apart[n].NRC_number << endl;
					}
			   
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
		
			cout << "Do you wanna try this(y,n) :";
			cin >> test;
	}while(test == 'y');
	  
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
			   		
				for(n=0; n<SIZE; n++) 
					{
					cout << endl;
					cout << "Enter Customername: ";
					cin >> apart[n].Username;
					cout << "Enter Customer_Adress: ";
					cin >> apart[n].User_Adress; 
					cout << "Enter Customer NRC_number: ";
					cin >> apart[n].NRC_number; 
					}
					cout << endl;
					for(n=0; n<SIZE; n++) 
					{
					
					cout << "Customer name: " << apart[n].Username << endl;
					cout << "Customer_Adress: " << apart[n].User_Adress << endl;
					cout << "Customer_NRC_number: " << apart[n].NRC_number << endl;
					}
			   
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
		
			cout << "Do you wanna try this(y,n) :";
			cin >> test;
	}while(test == 'y');
	  
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
			   		
				for(n=0; n<SIZE; n++) 
					{
					cout << endl;
					cout << "Enter Customername: ";
					cin >> apart[n].Username;
					cout << "Enter Customer_Adress: ";
					cin >> apart[n].User_Adress; 
					cout << "Enter Customer NRC_number: ";
					cin >> apart[n].NRC_number; 
					}
					cout << endl;
					for(n=0; n<SIZE; n++) 
					{
					
					cout << "Customer name: " << apart[n].Username << endl;
					cout << "Customer_Adress: " << apart[n].User_Adress << endl;
					cout << "Customer_NRC_number: " << apart[n].NRC_number << endl;
					}
			   
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
		
			cout << "Do you wanna try this(y,n) :";
			cin >> test;
	}while(test == 'y');
	  
	cout << "Thanks";
    break;
        default:  
           cout << "\n Error \n Only Choice 1,2,3\n";  
            break;   
    } 
    
    cout << "\nDO you wanna try(y,n) :";
    cin >> d;
   }while(d == 'y');
   
return 0; 
} 



