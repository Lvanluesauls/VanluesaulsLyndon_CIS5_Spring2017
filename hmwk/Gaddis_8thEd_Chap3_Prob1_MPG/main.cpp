/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 08, 2017, 12:19 PM
 * Purpose:  Calculate Miles per gallon for any vehicle
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
    float tnkSize, maxDist; //Gas Tank size and Distance traveled on full tank
    float mpg;              // Miles per gallon
    
    //Input data
    cout<<"How many gallons can the gas tank hold?"<<endl;
    cin>>tnkSize;
    cout<<"How far can the vehicle trave on a full tank?"<<endl;
    cin>>maxDist;
    
    //Map inputs to outputs or process the data
    mpg=(maxDist/tnkSize); //Max distance divided by gas tank size
    
    //Output the transformed data
    cout<<"The vehicle can travel "<<mpg<<" miles per gallon of gas.";
    
    //Exit stage right!
    return 0;
}

