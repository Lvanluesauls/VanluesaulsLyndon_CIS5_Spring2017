/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 08, 2017 1:06 PM
 * Purpose:  Calculate Average rainfall for a given three month span.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Output- Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string month1,month2,month3;//Variables for month 1, 2,and 3.
    float  rMonth1,rMonth2,rMonth3,average;//Variables for amount of rainfall.
    
    //Input data
    cout<<"Enter the first month (i.e. July): ";
    cin>>month1;
    cout<<"Enter the amount of rainfall in "<<month1<<" in inches: ";
    cin>>rMonth1;
    cout<<"Enter the Second month (i.e. July): ";
    cin>>month2;
    cout<<"Enter the amount of rainfall in "<<month2<<" in inches: ";
    cin>>rMonth2;
    cout<<"Enter the third month (i.e. July): ";
    cin>>month3;
    cout<<"Enter the amount of rainfall in "<<month3<<" in inches: ";
    cin>>rMonth3;
    
    //Map inputs to outputs or process the data
    average=(rMonth1+rMonth2+rMonth3)/3;//Average rainfall for the three months
    
    //Output the transformed data
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and "<<month3;
    cout<<" is "<<setprecision(2)<<fixed<<average<<"."<<endl;
           
    //Exit stage right!
    return 0;
}

