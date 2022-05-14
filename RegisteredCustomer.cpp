#include<iostream>
#include<cstring>
using namespace std;
#include"RegisteredCustomer.h"
#include"Property.h"
#define SIZE 2


RegisteredCustomer::RegisteredCustomer(){
	        strcpy(name," ");
		    strcpy(permanentAddress," ");
		    strcpy(email," ");
		    contactNumber=0;
		    nic=0;
		    customerID=0;
		}
		
RegisteredCustomer::RegisteredCustomer(char n[100],char pAdd[100],char eM[100],int cn,int nIC,int cID){
			strcpy(name,n);
		    strcpy(permanentAddress,pAdd);
		    strcpy(email,eM);
		    contactNumber=cn;
		    nic=nIC;
		    customerID=cID;
		    
		    cout<<"\n\nCustomer ID: "<<customerID<<" Registered Customer object created";
		}
		
void RegisteredCustomer::addProperties(Property* p1,Property* p2){
			p[0]=p1;
			p[1]=p2;
		}
		
void RegisteredCustomer::setDetails(){}
void RegisteredCustomer::updateDetails(){}
void RegisteredCustomer::displayDetails(){}

RegisteredCustomer::~RegisteredCustomer(){
			cout<<"\n\nCustomer ID: "<<customerID<<" Registered Customer object deleted";
		}	

