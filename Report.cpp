#include<iostream>
#include<cstring>
using namespace std;
#include"Property.h"
#include"Report.h"
#define SIZE 2

Report::Report(){
	    	reportNo=0;
	    	issuedYear=0;
		    issuedMonth=0;
		    issuedDay=0;
	        strcpy(title," ");
		}
		
Report::Report(int rNo,int iY,int iM,int iD,char tit[30]){
			reportNo=rNo;
			issuedYear=iY;
		    issuedMonth=iM;
		    issuedDay=iD;
	        strcpy(title,tit);
	        
	        cout<<"\n\nReport No: "<<reportNo<<"Report object created";
		}
		
void Report::generarteReport(){
}

void Report::addProperties(Property* p1,Property* p2){
			p[0]=p1;
			p[1]=p2;
		}
		
Report::~Report(){
			cout<<"\n\nReport No: "<<reportNo<<"Report object deleted";
		}
		
