#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"
#define SIZE 2

class Report{
	private:
		int reportNo;
		int issuedYear;
		int issuedMonth;
		int issuedDay;
	    char title[30];
	    
	    Property* p[SIZE];
	    
	public:
	    Report();
		Report(int rNo,int iY,int iM,int iD,char tit[30]);
		void generarteReport();
		void addProperties(Property* p1,Property* p2);
		~Report();		
};

