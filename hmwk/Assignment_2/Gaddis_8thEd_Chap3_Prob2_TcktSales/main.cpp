/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 08, 2017, 12:25 PM
 * Purpose:  Write a program that receives ticket sales at 3 price points 
 *           and adds them together
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //output formating library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float classA,classB,classC,qtyA,qtyB,qtyC,total;
    
    //Initialize variables
    classA=15.00; // cost of class A ticket
    classB=12.00; // cost of class B ticket
    classC=9.00;  // cost of class C ticket
    
    //Input data
    cout<<"How many Class A tickets were sold?"<<endl;
    cin>>qtyA;
    cout<<"How many Class B tickets were sold?"<<endl;
    cin>>qtyB;
    cout<<"How many class C tickets were sold?"<<endl;
    cin>>qtyC;
    
    //Map inputs to outputs or process the data
    float tempA,tempB,tempC; //Temp values to calculate ticket profit
    tempA=qtyA*classA;
    tempB=qtyB*classB;
    tempC=qtyC*classC;
    total=tempA+tempB+tempC;
    
    //Output the transformed data
    cout<<"Total amount from ticket sales are $"
         <<setprecision(2)<<fixed<<total<<endl;
    
    //Exit stage right!
    return 0;
}

