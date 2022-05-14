#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"
#include"RegisteredCustomer.h"
#include"Reservation.h"

Reservation::Reservation(){
	    	reservationID=0;
		    strcpy(reservedDate," ");
		    strcpy(customerName," ");
		    propertyID=0;
		}
		
Reservation::Reservation(int rID,char rDate[10],char cusName[100],int pID){
			reservationID=rID;
		    strcpy(reservedDate,rDate);
		    strcpy(customerName,cusName);
		    propertyID=pID;
		    
		    cout<<"\n\nResevation ID: "<<reservationID<<" Reservation object created";
		}
		
void Reservation::addProperty(Property* pty){
			p=pty;
		}
		
void Reservation::addRegisteredCustomer(RegisteredCustomer* rcus){
			rc=rcus;
		}
		
void Reservation::printDetails(){
}

Reservation::~Reservation(){
			cout<<"\n\nResevation ID: "<<reservationID<<" Reservation object deleted";
		}
