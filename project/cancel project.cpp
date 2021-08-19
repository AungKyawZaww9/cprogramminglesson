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
    string str1 = "Welcome to Yangon";   
    string str2("Where do you wanna go?"); 
    string str3("Please enter (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "Enter :";
    cin >> str3;
    } 
    void second()
    {
    string str1 = "Welcome to Mandalay";   
    string str2("Where do you wanna go?"); 
    string str3("Please enter (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "Enter :";
    cin >> str3;
	}
	void third()
	{
	string str1 = "Welcome to Bago";   
    string str2("Where do you wanna go?"); 
    string str3("Please enter (East_District, West_District, North_District or South_District) ");
  
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    
    cout << "Enter :";
    cin >> str3;
		
	}

}; 
class state{
	private:
		char a[50];
		
	public:
	void hname()
	{
		cout << "\nPlease write your suggest about this project:: ";
		cin.getline(a,50);
		
		
		cout << "Thanks \t: "<< a << endl;
		
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
    char y,z,w,f,test;
    state name1;
    Back obj1, obj2, obj3; 
	int x ;
	char d;

 do{
	cout << "Enter number ::(Yangon(1), Mandalay(2), Bago(3)) ::";
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
		    	cout << "\nSeikan have Laydown hospital, Kyaw Gyi Hospital, and Mya Hospital";
				cout << "\nlaydonwnkan(l) KyawGyi(k)";
				cin >> z;
					if(z == 'l')
					{
				
						cout << "\nLayDownkan Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
			    	 }
			    	 else if( z == 'k')
			    	{
						cout << "\nMyaw Hospital";
				    	cout << "\nDagon Seikkan NewTownship";
						cout << "\nNo.2 Main street road ";
						cout << "\nlayDountkan";
				    	cout << endl;
					}
				}
				else if(w == 'b')
				{
					cout << "\nKyawGyi Hospital";
			    	cout << "\nDagon North Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
				}
				else if(w == 'c')
				{
					cout << "\nShwe Hospital";
			    	cout << "\nDagon South Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
				}
				else if(w == 'd')
				{
					cout << "\nSein Hospital";
			    	cout << "\nDagon East Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
				}
				else
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
					cout << "Enter Username: ";
					cin >> apart[n].Username;
					cout << "Enter User_Adress: ";
					cin >> apart[n].User_Adress; 
					cout << "Enter NRC_number: ";
					cin >> apart[n].NRC_number; 
					}
					cout << endl;
					for(n=0; n<SIZE; n++) 
					{
					
					cout << "Username: " << apart[n].Username << endl;
					cout << "User_Adress: " << apart[n].User_Adress << endl;
					cout << "NRC_number: " << apart[n].NRC_number << endl;
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
							
				cout << "\nLayDownkan Hospital";
		    	cout << "\nDagon Seikkan NewTownship";
				cout << "\nNo.2 Main street road ";
				cout << "\nlayDountkan";
		    	cout << endl;
			     
				}
				else if(w == 'b')
				{
					cout << "\nKyawGyi Hospital";
			    	cout << "\nDagon North Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
				}
				else if(w == 'c')
				{
					cout << "\nShwe Hospital";
			    	cout << "\nDagon South Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
				}
				else if(w == 'd')
				{
					cout << "\nSein Hospital";
			    	cout << "\nDagon East Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
				}
				else
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
					cout << "Enter Username: ";
					cin >> apart[n].Username;
					cout << "Enter User_Adress: ";
					cin >> apart[n].User_Adress; 
					cout << "Enter NRC_number: ";
					cin >> apart[n].NRC_number; 
					}
					cout << endl;
					for(n=0; n<SIZE; n++) 
					{
					cout << "Username: " << apart[n].Username << endl;
					cout << "User_Adress: " << apart[n].User_Adress << endl;
					cout << "NRC_number: " << apart[n].NRC_number << endl;
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
							
				cout << "\nLayDownkan Hospital";
		    	cout << "\nDagon Seikkan NewTownship";
				cout << "\nNo.2 Main street road ";
				cout << "\nlayDountkan";
		    	cout << endl;
			     
				}
				else if(w == 'b')
				{
					cout << "\nKyawGyi Hospital";
			    	cout << "\nDagon North Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
				}
				else if(w == 'c')
				{
					cout << "\nShwe Hospital";
			    	cout << "\nDagon South Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
				}
				else if(w == 'd')
				{
					cout << "\nSein Hospital";
			    	cout << "\nDagon East Township";
					cout << "\nNo.2 Main street road ";
					cout << "\nlayDountkan";
			    	cout << endl;
				}
				else
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
					cout << "Enter Username: ";
					cin >> apart[n].Username;
					cout << "Enter User_Adress: ";
					cin >> apart[n].User_Adress; 
					cout << "Enter NRC_number: ";
					cin >> apart[n].NRC_number; 
					}
					cout << endl;
					for(n=0; n<SIZE; n++) 
					{
					cout << "Username: " << apart[n].Username << endl;
					cout << "User_Adress: " << apart[n].User_Adress << endl;
					cout << "NRC_number: " << apart[n].NRC_number << endl;
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
    
    cout << "\nDO you wanna other try(y,n) :";
    cin >> d;
   }while(d == 'y');
   
return 0; 
} 



