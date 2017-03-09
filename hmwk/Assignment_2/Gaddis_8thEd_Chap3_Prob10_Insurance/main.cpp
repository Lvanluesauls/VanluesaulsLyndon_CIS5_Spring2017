/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 9, 2017, 9:26 AM
 * Purpose:  Calculate the minimum insurance a building should have.
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
    float minInsr,replace;//Minimum Insurance & building Replacement
    
    //Input data
    cout<<"How much is the replacement cost of a building? "<<endl;
    cin>>replace;
    
    //Map inputs to outputs or process the data
    minInsr=replace*.8;
    
    //Output the transformed data
    cout<<"The minimum Insurance amount for the building is $"<<minInsr<<".";
    
    //Exit stage right!
    return 0;
}

