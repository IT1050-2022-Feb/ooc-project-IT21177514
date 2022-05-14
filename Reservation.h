#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"
#include"RegisteredCustomer.h"


class Reservation{
	private:
		int reservationID;
		char reservedDate[10];
		char customerName[100];
		int propertyID;
		
		Property* p;
		RegisteredCustomer* rc;
	public:
	    Reservation()
		Reservation(int rID,char rDate[10],char cusName[100],int pID);
		void addProperty(Property* pty);
		void addRegisteredCustomer(RegisteredCustomer* rcus);
		void printDetails();
		~Reservation();	
};

