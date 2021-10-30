#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctime>

using namespace std;

int main ()

{

mainmenu:

  int regn;
  cout << "\n\n";
  cout << "\n\t\t\t***************************************************************";
  cout << "\n\t\t\t ***       Welcome to GYM Management System                 ***";
  cout << "\n\t\t\t****************************************************************";
  cout << "\n\n\n\n\n";
  cout << "\n\t\t\t Press 1 for Registration.";
  cout << "\n\t\t\t Press 2 for Attendance Portal.";
  cout << "\n\t\t\t Press 3 for Fee Portal.";
  cout << "\n\t\t\t Press 4 for View Gym Data.";
  cout << "\n\t\t\t Press 5 for Exercise Schedule.";
  cout << "\n\t\t\t Press 6 for Exit.\n\n\n";

  char input1;
  char male[6],age[3], option[5], contact[15], amount[10], name[12], name2[12], name3[12],address[50];
  int month, choice, charges;
  cin >> input1;
  

  switch (input1)
  
    {
    	
     case '1':
    
      cout << "\n\t\t\t   Register New User:\n";
      cout << "\t\t\t***********************\n";
      cout << "\n\t\t\tEnter Name is :";
	 cin >> name;
	 cout << "\n\t\t\tMale (M or F): ";
	 cin >> male;
	 cout << "\n\t\t\tAge: ";
	 cin >> age;
	 cout << "\n\t\t\tConatct: ";
      cin >> contact;
      cout << "\n\t\t\tAddress: ";
      gets(address);
      cin >> address;
      cout <<
	        "\n\n\t\t\t*************************  Registration Successfull! *********************\n\n\n";	
	 
	 cout << "\t\t\t*******************************************************************************************";
	        
      cout << "\n\n\t\t\tPress any key to return main screen: ";
      
      goto mainmenu;
      
	case '2':
	 	
      cout << "\n\n\n\n\n\t\t\t  Attendance for Today :\n";
      cout << "\t\t\t****************************\n";
      cout << "\n\n\n\t\t\t Name of candidate : ";
      cin>>name2;
      cout << "\n\n\n\t\t\t"<< name2 <<gets(name)<< " has marked attendance sucessfully !\n\n";
     
      cout << "\n\n\n\n\t\t\t***********************************************************************";
      cout << "\n\n\t\t\tPress any key to return main screen: ";

      goto mainmenu;
    
      
	 case '3':

      cout << "\n\n\t\t\t   Fee Portal :\n";
      cout << "\t\t\t***********************\n";
      cout << "\n\n\n\t\t\tPress 1 to Submit Fee.";
      cout << "\n\t\t\tPress 2 to View Pending Fee.\n\n";
      cin >> option;
      
      if (*option == '1')
	
	{
		
	  cout << "\n\n\t\t\tName of Candidate : ";
       cin  >>name3;
       gets(name3);
       
       cout << "\n\t\t\t1. Enter For If You Are Student :";
	  cout << "\n\t\t\t2. Enter For If Your Age is Less than 20 year :";
	  cout << "\n\t\t\t3. Enter For If Your Age is Greater than 20 year :";
	  cout << "\n\t\t\t4. Enter For Quit :\n\n";
	  cin  >> choice;
	  cout <<   "\n\t\t\tHow Many Month : ";
	  cin  >> month;
       
	  if(choice == 1 || choice == 2 || choice == 3)
	  
	  {
	  
	  	switch (choice)
	  	
		{
	  	     case 1:
	  		
			  	cout << "\n\t\t\tYour Bill Is : " <<month * 500;
	  			break;
	  			
	  		case 2:
			
			     cout << "\n\t\t\tYour Bill Is :" <<month * 700;
				break;
				
			case 3:
			 
			     cout<< "\n\t\t\tYour Bill Is :" <<month * 1000;
				break;
				
		}
		
		cout <<
	          "\n\n\n***********************   Payment Successfull! *********************\n\n\n";	
	  }
	  
	  else if(choice > 4)
	  
	  {
	  
	 	cout << "\n\n\n\t\t\tYou Enter Wrong Value \n";
	  	cout << "\n\n\n\t\t\tPlease Run The Programme Again \n";
	 
	  }
	 
	  else if(choice == 4)
	 
	  {
	  	cout << "\n\n\n\t\t\tExit \n";
	  }
	
	
	} 
	  
         if (*option == '2')
	
	  {
	 
	  cout << "\n\t\t\tNone of the candidates do not have any pending fee!\n\n\t\t\t";
	  cout << " \n\t\t\tAll Candidates have done their payments!\n\n\t\t\t";
	 
	  }
      
       cout << "***********************************************************************";
	  cout << "\n\n\n\t\t\tPress any key to return main screen: ";
      

      goto mainmenu;
      
     case '4':
     	
      cout << "\n\n\t\t\t   Gym Data:\n";
      cout << "\t\t\t***********************\n";
      cout << "\n\n\t\t\tName of Candidate :";
	 cout << name;
      cout << "\n\n\t\t\tMale (M or F): ";
      cout << male;
      cout << "\n\n\t\t\tAge: ";
	 cout << age;
      cout << "\n\n\t\t\tConatct: ";
      cout << contact;
      cout << "\n\n\t\t\tAddress: ";
      cout << address;
     
	 cout << "\n\n\n\t\t\t***********************************************************************"; 
	 
      cout << "\n\n\t\t\tPress any key to return main screen: ";

      goto mainmenu;
      
     case '5':

      cout << "\n\n\t\t\t   Exercise Schedule:\n";
      cout << "\t\t\t***********************\n";
      cout << "\n\n\t\t\tMonday: Chest";
      cout << "\n\n\t\t\tTuesday: Biceps";
      cout << "\n\n\t\t\tWednesday: Triceps";
      cout << "\n\n\t\t\tThursday: Back";
      cout << "\n\n\t\t\tFriday: Leg";
      cout << "\n\n\t\t\tSaturday: Shoulder";
      
      cout << "\n\n\n\t\t\t***********************************************************************"; 
      cout << "\n\n\n\t\t\tPress any key to return main screen: ";

      goto mainmenu;
      
     case '6':
    	
      exit (1);
      
     default:
    	
	    cout << "\n\t\t\tPlease press key from 1 to 6.";
      
     }

      return 0;

}
    
  

