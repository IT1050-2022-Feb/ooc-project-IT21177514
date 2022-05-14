#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"
#define SIZE 2

class RegisteredCustomer{
	private:
		char name[100];
		char permanentAddress[100];
		char email[100];
		long contactNumber;
		long nic;
		int customerID;
		
		Property* p[SIZE];
		
	public:
	    RegisteredCustomer();
		RegisteredCustomer(char n[100],char pAdd[100],char eM[100],int cn,int nIC,int cID);
		void addProperties(Property* p1,Property* p2);
		void setDetails();
		void updateDetails();
		void displayDetails();
		~RegisteredCustomer();	
};


