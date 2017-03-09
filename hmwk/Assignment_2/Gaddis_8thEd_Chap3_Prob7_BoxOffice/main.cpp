/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 08, 2017, 1:38 PM
 * Purpose:  Box office ticket sales.
*/

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string movName;
    float aTicket,cTicket,aQty,cQty;//Adult tickets and Child tickets
    float grossPr,netProf,distPro;//Gross Profit, Net Profit, and Distributor Profit
            
    //Initialize variables
    aTicket=10;//initialize the price of an adult ticket
    cTicket=6; //initialize the price of a child ticket
    
    //Input data
    cout<<"What is the name of the movie?";
    getline(cin, movName);
    
    cout<<"How many adult tickets were sold?";
    cin>>aQty;
    cout<<"How many child tickets were sold?";
    cin>>cQty;
            
    //Map inputs to outputs or process the data
    grossPr=(aTicket*aQty)+(cTicket*cQty);
    netProf=grossPr*.2;
    distPro=grossPr-netProf;
    
    //Output the transformed data
    cout<<"Movie Name: "<<movName<<endl;
    cout<<"Adult Tickets Sold: "<<aQty<<endl;
    cout<<"Child Tickets Sold: "<<cQty<<endl;
    cout<<"Gross Box Office Profit: $"<<grossPr<<endl;
    cout<<"Net Box Office Profit: $"<<netProf<<endl;
    cout<<"Amount Paid to Distributor: $"<<distPro<<endl;
    
    //Exit stage right!
    return 0;
}

