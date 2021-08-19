/*void Title()
{
	int n;
	do
	{
		cout<<"\n\tAdd/Edit Menu\n";
		cout<<"\t=============\n\n";
		cout<<"\t1:Add User information\n\n";
		cout<<"\t2:Show User information\n\n";
		cout<<"\t3:Edit User information\n\n";
		cout<<"\t4:Deleted User information\n\n";
		cout<<"\tEnter option(1-4): ";
		cin>>n;
		switch(n)
		{
			case 1:adduser();cin.get();break;
			case 2:searchuser();cin.get();break;
		//	case 3:addemp();cin.get();break;
		//	case 4:addemp();cin.get();break;
			case 5:break;
			default: Title();
		}
	}while(n!=5);
}

void showuser_table()
	{
		cout<<"\t"<<name<<"\t"<<birth<<"\n\n";
		cout<<"\t"<<age<<"\t"<<courseName<<"\n\n";
	}
			
void displayuser_table()
{
	int counter=0;
	cout<<"\n\tAll User Information\n";
	cout<<"\t===========================================================";
	cout<<"\n\tNo."<<"\t"<<"Name"<<"\t\t"<<"Infromation"<<endl;
	cout<<"\t===========================================================\n\n";
	
	Student stu;
	ifstream infile;
	infile.open("Calculator.txt",ios::binary);
	
	while(infile.read((char*)&cal,sizeof(cal)))
	{
		counter++;
		cout<<"\t"<<counter;
		cal.showuser_table();
	}
	cout<<"\t===========================================================\n\n";
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
	if(num==0)
	{
		cout<<"\n\tNo delete..\n";
		cin.get();
		return;
	}
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		cin.get();
		return;
	}
	displayuser_table();
	cout<<"\n\tEnter Number: ";cin>>k;
	if(k>num)
	{
		cout<<"\n\tWrong Number.. :"<<num ";
		cin>>n;
	}
	ofstream outFile;
	outFile.open("Temp.txt",ios::binary);
	inFile.seekg(0,ios::beg);
	int counter=0;
	while(inFile.read(reinterpret_cast<char*> (&cal), sizeof(Calculator)))
	{
		user++;
		if(user!=k)
		{
			outFile.write(reinterpret_cast<char*> (&cal), sizeof(Calculator));
		}
	}
	outFile.close();
	inFile.close();
	remove("Calculator.txt");
	rename("Temp.txt","Calculator.txt");
	cout<<"\n\n\tRecord Deleted ..";
	cin.get();
}			
			
*/			
			
			
			
