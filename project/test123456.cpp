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
