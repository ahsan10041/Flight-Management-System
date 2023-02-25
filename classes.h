//===================================================================================
// Name     :   Ahsan Ali
// Roll     :   20i-0561
// Section  :   B
// Subject  :   OOP
// SEMESTER PROJECT
//
// NOTE: This file carries the defination of all classes
//===================================================================================

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

// Class for Displaying Flight Schedules
class flightSchedule
{
	public: 
		void Quettatokarachi();
		void Quettatoislamabad();
		void Quettatolahore();
		void Quettatopeshawar();
		void karachitoQuetta();
		void karachitoislamabad();
		void karachitolahore();
		void karachitopeshawar();
		void islamabadtoQuetta();
		void islamabadtokarachi();
		void islamabadtolahore();
		void islamabadtopeshawar();
		void peshawartoQuetta();
		void peshawartokarachi();
		void peshawartoislamabad();
		void peshawartolahore();
		void lahoretokarachi();
		void lahoretoQuetta();
		void lahoretoislamabad();
		void lahoretopeshawar();
		
};

//Forward Declaration	
class driver;

// Class for Flight seat booking for Passenger

class booking
{
	
	public:
	int departure;
	int destination;
	
	driver *d1;
	
	 string cities[5]={"Islamabad","Karachi","Lahore","Peshawar","Quetta"};
	 
				//seats for eco
		//four cities each 3 planes
		 int seatsQuettaEco[4][3];
		 int seatsIslamabadEco[4][3];
		 int seatsKarachiEco[4][3];
		 int seatsLahoreEco[4][3];
		 int seatsPeshawarEco[4][3];
		 
		 //seats for business
		 int seatsQuettabus[4][3];
		 int seatsIslamabadbus[4][3];
		 int seatsKarachibus[4][3];
		 int seatsLahorebus[4][3];
		 int seatsPeshawarbus[4][3];
		
		 
	int choice;
	int flightclass;
	int price;
	int quantity;
	double tax;
	
	//Assosiation with Flight schedule as it accesses the flight schedule
	
	flightSchedule *fs=new flightSchedule;
	
	// Parametrized Constructor
	booking(int dep, int des);
	
	//Default Constructor
	booking();
	
	void bookflight();
	void setseats();
	

};


// Parent class for Passenger and admin

class user
{
protected:
	string name;
	string cnic;
	string password;
	
public:
 	
	// Default Constructor
 	user()
 	{
	cnic=" ";
	password=" ";
	}
	
	//Parametrized Constructor
	user(string c,string p)
 	{
	cnic=c;
	password=p;
	}
		
	
};




// Passenger Class inherited from User

class pass:public user
{
	 
	public:

	driver *d;
	
	//Default Constructor
	pass():user()
	{
	}
	
	//Parametrized Constructor
	pass(string c,string p):user(c,p)
	{
	
	}
	
	//Assosiating with Flight Schedule
	flightSchedule *fs;
	
	int count = 0;
	void login();
	void menu1();
	void registration();
};

// Admin Class Inherited from User

class admin : public user
{
	public:
	//Default Constructor
	admin():user()
	{
	}
	
	//Parametrized Constructor
	admin(string c,string p):user(c,p)
	{
	
	}
	
	driver *d;
	int choice;
	int count1 = 0;
	void login();
	void menu1();
	flightSchedule *fs;
};

//Driver Class 
class driver
{	public:
	 void menu1();
	 pass p1;
	 admin a;
	 flightSchedule fs;
};

