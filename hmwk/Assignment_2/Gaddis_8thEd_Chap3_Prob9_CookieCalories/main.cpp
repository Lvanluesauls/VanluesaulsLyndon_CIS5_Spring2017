/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 9, 2017, 9:22 AM
 * Purpose:  Calculate how many calories are consumed.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare & Initialize variables
    int cookCal=100,nCookie,totCal;
    
    //Input data
    cout<<"How many cookies were consumed? ";
    cin>>nCookie;
    
    //Map inputs to outputs or process the data
    totCal=nCookie*cookCal;
    
    //Output the transformed data
    cout<<"Total calories consumed: "<<totCal;
    
    //Exit stage right!
    return 0;
}

