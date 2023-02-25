//===================================================================================
// Name     :   Ahsan Ali
// Roll     :   20i-0561
// Section  :   B
// Subject  :   OOP
// SEMESTER PROJECT
//
// NOTE: This file carries the functionalities of All classes
//===================================================================================

#include"classes.h"


//Default Constructor of Booking
booking::booking()
{
	departure=0;
	destination= 0;
}

//Parametrized Constructor Of booking
booking::booking(int dep, int des)
{
	departure=dep;
	destination= des;
	setseats();
}

//Setting Number of Seats 
void booking::setseats()
{
		//50 seats in each plane for Economy
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<3;j++)
			{
				seatsQuettaEco[i][j]=50;
				seatsIslamabadEco[i][j]=50;
				seatsKarachiEco[i][j]=50;
				seatsLahoreEco[i][j]=50;
				seatsPeshawarEco[i][j]=50;
			}
		}
		
		//10 seats in each plane for business
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<3;j++)
			{
				seatsQuettabus[i][j]=10;
				seatsIslamabadbus[i][j]=10;
				seatsKarachibus[i][j]=10;
				seatsLahorebus[i][j]=10;
				seatsPeshawarbus[i][j]=10;
			}
		}
}

// Function for Carrying the process of Booking seats
void booking::bookflight()
{
	//refrences:
	//1-Islamabad
	//2-karachi
	//3-Lahore
	//4-Peshawar
	//5-Quetta
		 
		 
	
	cout<<"\n\t\t FLIGHT SCHEDULE FOR THE SELECTED CITIES"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	
	
	//Departure = Islamabad
	if(departure==1)
	{
		
		//Destination = Karachi
		if(destination==2)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->islamabadtokarachi();
		}
		//Destination = Lahore
		else if(destination==3)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->islamabadtolahore();
		}
		//Destination = Peshawar
		else if(destination==4)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->islamabadtopeshawar();
		}
		//Destination = Quetta
		else if(destination==5)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->islamabadtoQuetta();
		}
		
		else 
		{
		cout<<"\t INVALID CHOICE"<<endl;
		exit(0);
		}
	}
	
	else if(departure==2)
	{
		if(destination==1)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->karachitoislamabad();
		}
		else if(destination==3)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->karachitolahore();
		}
		else if(destination==4)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->karachitopeshawar();
		}
		else if(destination==5)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->karachitoQuetta();
		}
		else 
		{
		
		cout<<"\t INVALID CHOICE"<<endl;
		exit(0);
		}
	}
	
	else if(departure==3)
	{
	
		if(destination==1)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->lahoretoislamabad();
		}
		else if(destination==2)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->lahoretokarachi();
		}
		else if(destination==4)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->lahoretopeshawar();
		}
		else if(destination==5)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->lahoretoQuetta();
		}
		else 
		{
		cout<<"\t INVALID CHOICE"<<endl;
		exit(0);
		}
	}
	
	else if(departure==4)
	{
		if(destination==1)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->peshawartoislamabad();
		}
		else if(destination==2)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->peshawartokarachi();
		}
		else if(destination==3)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->peshawartolahore();
		}
		else if(destination==5)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->peshawartoQuetta();
		}
		else 
		{
		cout<<"\t INVALID CHOICE"<<endl;
		exit(0);
		}
	}
	
	else if(departure==5)
	{
	
		if(destination==1)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->Quettatoislamabad();
		}
		else if(destination==2)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->Quettatokarachi();
		}
		else if(destination==3)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->Quettatolahore();
		}
		else if(destination==4)
		{
		cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		fs->Quettatopeshawar();
		}
		else 
		{
		cout<<"\t INVALID CHOICE"<<endl;
		exit(0);
		}
	} 
	
	else {
		cout<<"\t INVALID CHOICE"<<endl;
		exit(0);
		}
	
	//Selecting Option from 3 flights	
	cout<<"\n\t Select Flight no. (1/2/3)"<<endl;
	cout<<"choice : ";
	cin>>choice;

	//Selecting ECO/BUS
	cout<<"\n\t Kindly Select Flight Class (1. Eco/ 2. Business)"<<endl;
	cout<<"choice : ";
	cin>>flightclass;
	
	//NUMBER OF SEATS
	cout<<"\n Please Enter Quantity : ";
	cin>>quantity;
	
	//EVALUATING PRICE
	if(flightclass==1)
	price= quantity*20000;
	else if(flightclass==2)
	price= quantity*40000;
	tax= price * 0.05;
	
	//Displaying Booking Details
	cout<<"\n\n\n-------------------------------------------------------------"<<endl;
	cout<<"\t FLIGHT SEATS BOOKED!!  \n"<<endl;
	cout<<" \n\t\tDetails"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<"\t"<<quantity<<" Seats booked from "<<cities[departure-1]<<" to "<<cities[destination-1]<<endl<<endl;
	if(flightclass==1)
	cout<<"\t Class: ECONOMY\n"<<endl;
	else if(flightclass==2)
	cout<<"\t Class: Bussiness\n"<<endl;
	
	cout<<"\t Price = "<<price<<endl<<endl;
	cout<<"\t Tax = "<<tax<<endl<<endl;
	cout<<"\t Total Payment = "<<price+tax<<endl<<endl;
	//Randomly assigning Booking Id
	int bookingnumber = rand()%10000+1;
	
	
	cout<<"\t Booking Id = "<<bookingnumber<<endl<<endl;
	cout<<"   NOTE: 'Kindly Collect your boarding Pass after payment at Airport' "<<endl<<endl;
	
	d1->menu1();
	
	//DECRESING SEATS
	
	if(departure==1)
	{
		if(flightclass==1)
		seatsIslamabadEco[destination-1][choice]-quantity;
		else if(flightclass==2)
		seatsIslamabadbus[destination-1][choice]-quantity;
	}
	
	else if(departure==2)
	{
		if(flightclass==1)
		seatsKarachiEco[destination-1][choice]-quantity;
		else if(flightclass==2)
		seatsKarachibus[destination-1][choice]-quantity;	
	}
	
	else if(departure==3)
	{
		if(flightclass==1)
		seatsLahoreEco[destination-1][choice]-quantity;
		else if(flightclass==2)
		seatsLahorebus[destination-1][choice]-quantity;	
	}
	
	else if(departure==4)
	{
		if(flightclass==1)
		seatsPeshawarEco[destination-1][choice]-quantity;
		else if(flightclass==2)
		seatsPeshawarbus[destination-1][choice]-quantity;	
	}
	
	else if(departure==5)
	{
		if(flightclass==1)
		seatsQuettaEco[destination-1][choice]-quantity;
		else if(flightclass==2)
		seatsQuettabus[destination-1][choice]-quantity;	
	}
	
	
}


// Driver Class Initial Menu

void driver::menu1()
{
cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\n==================\t !! WELCOME TO THE NPAFS AIRLINES !!\t========================\n"<<endl;
	cout<<" \t 1.  LOGIN as admin"<<endl;
	cout<<" \t 2.  LOGIN as passenger"<<endl;
	cout<<" \t 3.  REGISTER passenger"<<endl;
	cout<<" \t 4.  SEE flight schedule"<<endl;
	cout<<" \t 5.  Exit\n"<<endl;
	int choice ;
	cout<<"ENTER CHOICE :";
	cin>>choice;
	
	//Calling for Functions from Admin Class
	if(choice==1)
	{
		a.login();
		a.menu1();
		
	}
	//Calling for Functions from Passenger Class
	else if(choice==2)
	{
		p1.login();
		p1.menu1();
	}
	
	//Calling for Registration of User from Passenger Class
	else if(choice==3)
	{
		p1.registration();
	}
	
	//Showing All Flight Schedules of the day from Class FlightSchedule
	else if(choice==4)
	{
	cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		cout<<"\t===========QUETTA AIRPORT===================\n"<<endl;
		fs.Quettatokarachi();
		fs.Quettatoislamabad();
		fs.Quettatolahore();
		fs.Quettatopeshawar();
		cout<<"\n\t===========Karachi AIRPORT===================\n"<<endl;
		fs.karachitoQuetta();
		fs.karachitoislamabad();
		fs.karachitolahore();
		fs.karachitopeshawar();
		cout<<"\n\t===========Islamabad AIRPORT===================\n"<<endl;
		fs.islamabadtoQuetta();
		fs.islamabadtokarachi();
		fs.islamabadtolahore();
		fs.islamabadtopeshawar();
		cout<<"\n\t===========Peshawar AIRPORT===================\n"<<endl;
		fs.peshawartoQuetta();
		fs.peshawartokarachi();
		fs.peshawartoislamabad();
		fs.peshawartolahore();
		cout<<"\n\t===========Lahore AIRPORT===================\n"<<endl;
		fs.lahoretokarachi();
		fs.lahoretoQuetta();
		fs.lahoretoislamabad();
		fs.lahoretopeshawar();
		
		menu1();	
	}
	
	else if(choice==5)
	{
		exit(0);
	}
} 

// Function of Admin Class to Authenticate the Login

void admin::login()
{
	cout<<"\n\t ======  Login as admin========="<<endl;
	
	cout<<" Enter your Username :";
	cin>>cnic;
	
	cout<<"Enter your password :";
	cin>>password;

	
	//Comparing The entered Details from File admin.txt that saves login details of Admins	
	
	ifstream file;
	string cn,ps;
	
	file.open("admin.txt",ios::in);
	if(file)
	{
		while(file>>cn>>ps)
		{
			if((cn==cnic)&&(ps==password))
			count1++;
		} 
	
	file.close();
	}
	
	
}
	
// Admin PANEL 

void admin::menu1()
{
	//IF successfully Authenticated.
	if(count1>0)
	{
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\n\t LOGGED IN SUCCESSFULLY\n"<<endl;
		
	cout<<"\n\t !!WELCOME TO THE Admin PANEL!!\n"<<endl;	
	cout<<"  1.  SEE all flights schedule of the day"<<endl;
	cout<<"  2.  See flights from a particular airport  "<<endl;
	cout<<"  3.  Change flight schedule  "<<endl;
	cout<<"  4.  Logout"<<endl;
	}
	
	else{
		cout<<"INVALID"<<endl;
		exit(0);
	}
	cout<<" Enter your choice : ";
	cin>>choice;	
	
	//Showing of All flight Schedules -  Calling Functions from FlightSchedule Class
	if(choice==1)
	{
	cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		cout<<"\t===========QUETTA AIRPORT===================\n"<<endl;
		fs->Quettatokarachi();
		fs->Quettatoislamabad();
		fs->Quettatolahore();
		fs->Quettatopeshawar();
		cout<<"\n\t===========Karachi AIRPORT===================\n"<<endl;
		fs->karachitoQuetta();
		fs->karachitoislamabad();
		fs->karachitolahore();
		fs->karachitopeshawar();
		cout<<"\n\t===========Islamabad AIRPORT===================\n"<<endl;
		fs->islamabadtoQuetta();
		fs->islamabadtokarachi();
		fs->islamabadtolahore();
		fs->islamabadtopeshawar();
		cout<<"\n\t===========Peshawar AIRPORT===================\n"<<endl;
		fs->peshawartoQuetta();
		fs->peshawartokarachi();
		fs->peshawartoislamabad();
		fs->peshawartolahore();
		cout<<"\n\t===========Lahore AIRPORT===================\n"<<endl;
		fs->lahoretokarachi();
		fs->lahoretoQuetta();
		fs->lahoretoislamabad();
		fs->lahoretopeshawar();
		  menu1();
	}
	
	//Showing Flight Schedule Flying from a particular City
	else if(choice==2)
		{
			int choicecity;
			
			cout<<"\n\t !!Choose City!!\n"<<endl;	
		cout<<"  1.  Islamabad "<<endl;
		cout<<"  2.  Karachi  "<<endl;
		cout<<"  3.  Lahore  "<<endl;
		cout<<"  4.  Peshawar"<<endl;
		cout<<"  5.  Quetta \n"<<endl;
		
		cout<<"CHOICE : ";
		cin>>choicecity;
		
		if(choicecity==1)
		{
			cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
			cout<<"\n\t===========Islamabad AIRPORT===================\n"<<endl;
			fs->islamabadtoQuetta();
			fs->islamabadtokarachi();
			fs->islamabadtolahore();
			fs->islamabadtopeshawar();
		}
		else if(choicecity==2)
		{
			cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
			cout<<"\n\t===========Karachi AIRPORT===================\n"<<endl;
			fs->karachitoQuetta();
			fs->karachitoislamabad();
			fs->karachitolahore();
			fs->karachitopeshawar();
		}
		else if(choicecity==3)
		{
			cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
			cout<<"\n\t===========Lahore AIRPORT===================\n"<<endl;
			fs->lahoretokarachi();
			fs->lahoretoQuetta();
			fs->lahoretoislamabad();
			fs->lahoretopeshawar();
		}
		else if(choicecity==4)
		{
			cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
			cout<<"\n\t===========Peshawar AIRPORT===================\n"<<endl;
			fs->peshawartoQuetta();
			fs->peshawartokarachi();
			fs->peshawartoislamabad();
			fs->peshawartolahore();
		}
		else if(choicecity==5)
		{
			cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
			cout<<"\t===========QUETTA AIRPORT===================\n"<<endl;
			fs->Quettatokarachi();
			fs->Quettatoislamabad();
			fs->Quettatolahore();
			fs->Quettatopeshawar();
			
			
		}
		else 
		{
		cout<<"INVALID"<<endl;
		}
		
		menu1();

	}
	
	//Incomplete
	else if(choice==3)
	{
		cout<<" CANT CHANGE"<<endl;
	}
	
	//Logging out and returning to Initial Menu
	else if(choice==4)
	{
		cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\n\t! LOGGED OUT SUCCESSFULLY !\n"<<endl;
		
		d->menu1();
	}
	
}	

//Function to Authenticate the Login of Passengers	
void pass::login()
{
cout<<"\n\t ======  Login as passenger========="<<endl;
	
	
	cout<<" Enter your cnic :";
	cin>>cnic;
	
	cout<<"Enter your password :";
	cin>>password;
	
	//Comparing the details entered with already saved login details from file passenger.txt
	
	ifstream file;
	string cn,ps;
	
	file.open("passenger.txt",ios::in);
	if(file)
	{
		while(file>>cn>>ps)
		{
			if((cn==cnic)&&(ps==password))
			count++;
		} 
	
	file.close();
	}
}

// Passenger Panel
void pass::menu1()
{
	int choice;
	string dep;
	string des;
	
	//If Authenticated
	if(count==1)
	{
	cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\n\t LOGGED IN SUCCESSFULLY\n"<<endl;
		
	cout<<"\n\t !!WELCOME TO THE PASSENGER PANEL!!\n"<<endl;	
	cout<<" \t 1.  SEE all flights schedule of the day"<<endl;
	cout<<" \t 2.  See flights from a particular airport  "<<endl;
	cout<<" \t 3.  Book a flight  "<<endl;
	cout<<" \t 4.  Logout\n"<<endl;
	}
	
	else
	{
		cout<<"INVALID"<<endl;
		exit(0);
	}
	cout<<" Enter your choice : ";
	cin>>choice;
	
	//Showing All Flight Schedule from Class FlightSchedule
	if(choice==1)
	{
	cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
		cout<<"\t===========QUETTA AIRPORT===================\n"<<endl;
		fs->Quettatokarachi();
		fs->Quettatoislamabad();
		fs->Quettatolahore();
		fs->Quettatopeshawar();
		cout<<"\n\t===========Karachi AIRPORT===================\n"<<endl;
		fs->karachitoQuetta();
		fs->karachitoislamabad();
		fs->karachitolahore();
		fs->karachitopeshawar();
		cout<<"\n\t===========Islamabad AIRPORT===================\n"<<endl;
		fs->islamabadtoQuetta();
		fs->islamabadtokarachi();
		fs->islamabadtolahore();
		fs->islamabadtopeshawar();
		cout<<"\n\t===========Peshawar AIRPORT===================\n"<<endl;
		fs->peshawartoQuetta();
		fs->peshawartokarachi();
		fs->peshawartoislamabad();
		fs->peshawartolahore();
		cout<<"\n\t===========Lahore AIRPORT===================\n"<<endl;
		fs->lahoretokarachi();
		fs->lahoretoQuetta();
		fs->lahoretoislamabad();
		fs->lahoretopeshawar();
		
		menu1();
		  
	}
	
	//Particular city
	else if(choice==2)
			{
				int choicecity;
				
				cout<<"\n\t !!Choose City!!\n"<<endl;	
			cout<<"  1.  Islamabad "<<endl;
			cout<<"  2.  Karachi  "<<endl;
			cout<<"  3.  Lahore  "<<endl;
			cout<<"  4.  Peshawar"<<endl;
			cout<<"  5.  Quetta \n"<<endl;
			
			cout<<"CHOICE : ";
			cin>>choicecity;
			
			if(choicecity==1)
			{
				cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
				cout<<"\n\t===========Islamabad AIRPORT===================\n"<<endl;
				fs->islamabadtoQuetta();
				fs->islamabadtokarachi();
				fs->islamabadtolahore();
				fs->islamabadtopeshawar();
			}
			else if(choicecity==2)
			{
				cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
				cout<<"\n\t===========Karachi AIRPORT===================\n"<<endl;
				fs->karachitoQuetta();
				fs->karachitoislamabad();
				fs->karachitolahore();
				fs->karachitopeshawar();
			}
			else if(choicecity==3)
			{
				cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
				cout<<"\n\t===========Lahore AIRPORT===================\n"<<endl;
				fs->lahoretokarachi();
				fs->lahoretoQuetta();
				fs->lahoretoislamabad();
				fs->lahoretopeshawar();
			}
			else if(choicecity==4)
			{
				cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
				cout<<"\n\t===========Peshawar AIRPORT===================\n"<<endl;
				fs->peshawartoQuetta();
				fs->peshawartokarachi();
				fs->peshawartoislamabad();
				fs->peshawartolahore();
			}
			else if(choicecity==5)
			{
				cout<<" \nDEPARTURE " <<"\t DESTINATION"<<"\t DEPARTING TIME"<<" \t Arrival time"<<endl;
				cout<<"\t===========QUETTA AIRPORT===================\n"<<endl;
				fs->Quettatokarachi();
				fs->Quettatoislamabad();
				fs->Quettatolahore();
				fs->Quettatopeshawar();
			}
			else 
			{
			cout<<"INVALID"<<endl;
			}
			
			menu1();
		}
	
	//Proceeding For Booking Flights
	else if(choice==3)
	{
			
			int dep,des;
			cout<<"\n\t\t Kindly select your departure city : "<<endl;
			cout<<"----------------------------------------------------------------------------------------------------\n\n"<<endl;
			cout<<" \t 1.  Islamabad "<<endl;
			cout<<" \t 2.  Karachi  "<<endl;
			cout<<" \t 3.  Lahore  "<<endl;
			cout<<" \t 4.  Peshawar"<<endl;
			cout<<" \t 5.  Quetta \n"<<endl;
			cout<<"Choice: ";
			cin>>dep;
			
			cout<<"\n\t\t Kindly select your destination city : "<<endl;
			cout<<"----------------------------------------------------------------------------------------------------\n\n"<<endl;
			cout<<" \t 1.  Islamabad "<<endl;
			cout<<" \t 2.  Karachi  "<<endl;
			cout<<" \t 3.  Lahore  "<<endl;
			cout<<" \t 4.  Peshawar"<<endl;
			cout<<" \t 5.  Quetta \n"<<endl;
			cout<<"Choice: ";
			cin>>des;
			
			//Associating with Booking
			booking *b=new booking(dep,des);
			b->bookflight();
	}
	
	//Logging out and returning to main menu
	else if(choice==4)
	{
		cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\n\t! LOGGED OUT SUCCESSFULLY !\n"<<endl;
		
		d->menu1();
	}
		
} 	

//Function for registration of new Passengers
void pass::registration()
{
	string cnic1;
	string pass1;
	string passre;
	int countch=0;
	cout<<"\n\t Registration\n"<<endl;
	
	int capital=0,small=0,digits=0;
	
	cout<<"Enter Cnic :";
	cin>>cnic1;
x:
	cout<<"Set Password :";
	cin>>pass1;
	
	digits= pass1.length();
	 int i=0;
	
	while(pass1[i]!='\0')
	{
		if((int(pass1[i])>=65)&& (int(pass1[i])<=90))
		{
			capital++;
		}
		if((int(pass1[i])>=97)&& (int(pass1[i])<=122))
		{
			small++;
		}
	
		i++;
	}
	
	if((digits<8) || (capital==0) || (small==0))
	{
		cout<<"Kindly follow the proper format i.e small,capital and atleast 8 digits"<<endl;
		goto x;
	}
	
	cout<<"Re enter password: ";
	cin>>passre;
	
	//Checking if the password matches 
	if(pass1==passre)
	{
	ifstream file;
	string cn,ps;
	
	file.open("passenger.txt",ios::in);
	if(file)
	{
		while(file>>cn>>ps)
		{
			if(cn==cnic1)
			countch++;
		} 
	
	file.close();
	}
	
	//If Cnic already in use Reject
	if(countch>0)
	{
		cout<<"CNIC ALREADY IN USE"<<endl;
		return;
	}
	//Else Update the file
	else
	{
	
	ofstream filein;
	
	
	filein.open("passenger.txt",ios::app);
	if(filein)
	{
		filein<<cnic1<<" "<<pass1;
	
	file.close();
	}
	
	}
	
	}
	
	cout<<"\n\t Registered Successfully"<<endl;
	d->menu1();
}

//Flight Schedules
void flightSchedule::Quettatokarachi()
{
	
	cout<<"   Quetta     "<<"\t Karachi    "<<"\t     00:20     "<<" \t  2:20    "<<endl;
	cout<<"   Quetta     "<<"\t Karachi    "<<"\t     06:30     "<<" \t  8:30    "<<endl;
	cout<<"   Quetta     "<<"\t Karachi    "<<"\t     18:00     "<<" \t  20:00    "<<endl;
	
}		
		
void flightSchedule::Quettatoislamabad()
{
	
	cout<<"   Quetta     "<<"\t Islamabad    "<<"\t     2:20      "<<" \t  4:20    "<<endl;
	cout<<"   Quetta     "<<"\t Islamabad    "<<"\t     07:30     "<<" \t  9:30    "<<endl;
	cout<<"   Quetta     "<<"\t Islamabad    "<<"\t     18:00     "<<" \t  20:00    "<<endl;
	
}

void flightSchedule::Quettatopeshawar()
{
	
	cout<<"   Quetta     "<<"\t Peshawar    "<<"\t     04:10     "<<" \t  7:20    "<<endl;
	cout<<"   Quetta     "<<"\t Peshawar    "<<"\t     06:30     "<<" \t  9:40    "<<endl;
	cout<<"   Quetta     "<<"\t Peshawar    "<<"\t     20:00     "<<" \t  23:10    "<<endl;
	
}

void flightSchedule::Quettatolahore()
{
	
	cout<<"   Quetta     "<<"\t lahore    "<<"\t     7:20      "<<" \t   9:40    "<<endl;
	cout<<"   Quetta     "<<"\t lahore    "<<"\t     16:30     "<<" \t  18:50    "<<endl;
	cout<<"   Quetta     "<<"\t lahore    "<<"\t     21:00     "<<" \t  23:00    "<<endl;
	
}		
	
void flightSchedule::karachitoQuetta()
{
	
	cout<<"   Karachi     "<<"\t Quetta    "<<"\t     02:20     "<<" \t  4:20    "<<endl;
	cout<<"   Karachi     "<<"\t Quetta    "<<"\t     07:30     "<<" \t  9:30    "<<endl;
	cout<<"   Karachi     "<<"\t Quetta    "<<"\t     19:00     "<<" \t  21:00    "<<endl;
	
}		
		
void flightSchedule::karachitoislamabad()
{
	
	cout<<"   Karachi     "<<"\t Islamabad    "<<"\t     03:20     "<<" \t  5:20    "<<endl;
	cout<<"   Karachi     "<<"\t Islamabad    "<<"\t     08:30     "<<" \t  10:30    "<<endl;
	cout<<"   Karachi     "<<"\t Islamabad    "<<"\t     19:20     "<<" \t  21:20    "<<endl;
	
}

void flightSchedule::karachitopeshawar()
{
	
	cout<<"   Karachi     "<<"\t Peshawar    "<<"\t     02:20     "<<" \t  4:20    "<<endl;
	cout<<"   Karachi     "<<"\t Peshawar    "<<"\t     07:30     "<<" \t  9:30    "<<endl;
	cout<<"   Karachi     "<<"\t Peshawar    "<<"\t     17:20     "<<" \t  19:20    "<<endl;
}

void flightSchedule::karachitolahore()
{
	
	cout<<"   Karachi     "<<"\t Lahore    "<<"\t     05:20     "<<" \t  7:20    "<<endl;
	cout<<"   Karachi     "<<"\t Lahore    "<<"\t     09:30     "<<" \t  11:30    "<<endl;
	cout<<"   Karachi     "<<"\t Lahore    "<<"\t     22:20     "<<" \t  00:20    "<<endl;
}

void flightSchedule::islamabadtokarachi()
{
	
	cout<<"   Islamabad  "<<"\t Karachi    "<<"\t     01:20     "<<" \t  3:20    "<<endl;
	cout<<"   Islamabad  "<<"\t Karachi    "<<"\t     07:30     "<<" \t  9:30    "<<endl;
	cout<<"   Islamabad  "<<"\t Karachi    "<<"\t     14:00     "<<" \t  16:00    "<<endl;
	
}		
		
void flightSchedule::islamabadtoQuetta()
{
	
	cout<<"   Islamabad "<<"\t Quetta    "<<"\t     1:20        "<<" \t  3:20    "<<endl;
	cout<<"   Islamabad "<<"\t Quetta    "<<"\t     04:30       "<<" \t  6:30    "<<endl;
	cout<<"   Islamabad "<<"\t Quetta    "<<"\t     18:00       "<<" \t  20:00   "<<endl;
	
}

void flightSchedule::islamabadtopeshawar()
{
	
	cout<<"   Islamabad "<<"\t Peshawar  "<<"\t     3:20     "<<" \t\t  5:20    "<<endl;
	cout<<"   Islamabad "<<"\t Peshawar  "<<"\t     07:30    "<<" \t\t  9:30    "<<endl;
	cout<<"   Islamabad "<<"\t Peshawar  "<<"\t     21:00    "<<" \t\t  23:00   "<<endl;
	
}

void flightSchedule::islamabadtolahore()
{
	
	cout<<"   Islamabad "<<"\t lahore    "<<"\t     11:20     "<<" \t  9:20    "<<endl;
	cout<<"   Islamabad "<<"\t lahore    "<<"\t     14:30     "<<" \t  16:30    "<<endl;
	cout<<"   Islamabad "<<"\t lahore    "<<"\t     22:00     "<<" \t  00:00    "<<endl;
	
	
}

void flightSchedule::peshawartokarachi()
{
	
	cout<<"   Peshawar    "<<"\t Karachi    "<<"\t     01:20     "<<" \t  3:20    "<<endl;
	cout<<"   Peshawar    "<<"\t Karachi    "<<"\t     09:30     "<<" \t  11:30    "<<endl;
	cout<<"   Peshawar    "<<"\t Karachi    "<<"\t     21:00     "<<" \t  23:00    "<<endl;
	
}		
		
void flightSchedule::peshawartoislamabad()
{
	
	cout<<"   Peshawar    "<<"\t islamabad  "<<"\t     04:20     "<<" \t   6:20     "<<endl;
	cout<<"   Peshawar    "<<"\t islamabad  "<<"\t     08:30     "<<" \t   10:30    "<<endl;
	cout<<"   Peshawar    "<<"\t islamabad  "<<"\t     23:00     "<<" \t   1:00     "<<endl;
	
}

void flightSchedule::peshawartolahore()
{
	
	cout<<"   Peshawar    "<<"\t lahore    "<<"\t     00:15     "<<" \t  2:15    "<<endl;
	cout<<"   Peshawar    "<<"\t lahore    "<<"\t     09:15     "<<" \t  11:15    "<<endl;
	cout<<"   Peshawar    "<<"\t lahore    "<<"\t     21:15     "<<" \t  23:15    "<<endl;
	
}

void flightSchedule::peshawartoQuetta()
{
	
	cout<<"   Peshawar    "<<"\t Quetta    "<<"\t     04:00     "<<" \t  6:20    "<<endl;
	cout<<"   Peshawar    "<<"\t Quetta    "<<"\t     09:10     "<<" \t  11:10    "<<endl;
	cout<<"   Peshawar    "<<"\t Quetta    "<<"\t     21:40     "<<" \t  23:40    "<<endl;
}

void flightSchedule::lahoretokarachi()
{
	
	cout<<"   LAHORE     "<<"\t Karachi    "<<"\t     00:50     "<<" \t  2:50    "<<endl;
	cout<<"   LAHORE     "<<"\t Karachi    "<<"\t     09:30     "<<" \t  11:30    "<<endl;
	cout<<"   LAHORE     "<<"\t Karachi    "<<"\t     20:00     "<<" \t  22:00    "<<endl;
	
}		
		
void flightSchedule::lahoretoislamabad()
{
	
	cout<<"   LAHORE     "<<"\t islamabad    "<<"\t     01:10     "<<" \t  3:10    "<<endl;
	cout<<"   LAHORE     "<<"\t islamabad    "<<"\t     09:50     "<<" \t  11:50    "<<endl;
	cout<<"   LAHORE     "<<"\t islamabad    "<<"\t     20:30     "<<" \t  22:30    "<<endl;
	
}

void flightSchedule::lahoretopeshawar()
{
	
	cout<<"   LAHORE     "<<"\t Peshawar    "<<"\t     01:50     "<<" \t  3:50    "<<endl;
	cout<<"   LAHORE     "<<"\t Peshawar    "<<"\t     10:30     "<<" \t  12:30    "<<endl;
	cout<<"   LAHORE     "<<"\t Peshawar    "<<"\t     21:00     "<<" \t  23:00    "<<endl;
	
}

void flightSchedule::lahoretoQuetta()
{
	
	cout<<"   LAHORE     "<<"\t Quetta    "<<"\t     02:50     "<<" \t  4:50    "<<endl;
	cout<<"   LAHORE     "<<"\t Quetta    "<<"\t     12:30     "<<" \t  2:30    "<<endl;
	cout<<"   LAHORE     "<<"\t Quetta    "<<"\t     19:00     "<<" \t  21:00    "<<endl;
}

