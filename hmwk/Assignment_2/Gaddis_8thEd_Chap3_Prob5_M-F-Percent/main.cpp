/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 08, 2017, 1:09 PM
 * Purpose:  Calculate the percentage of males and females in a class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Output - Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT=100.0f;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float numMale,numFem,total; //# of Males, # of Females, Total students.
    float pctMale,pctFem;
    //Input data
    cout<<"How many males are registered in the class? ";
    cin>>numMale;
    cout<<"How many females are registered in the class? ";
    cin>>numFem;
    
    //Map inputs to outputs or process the data
    total=(numMale+numFem);          //Add males and females to reach total
    pctMale=(numMale/total)*PERCENT; //Calculate percentage males
    pctFem=(numFem/total)*PERCENT;   //Calculate percentage females
    
    //Output the transformed data
    cout<<"The total number of students registered in the class is "
        <<total<<"."<<endl;
    cout<<"Males are "<<setprecision(2)<<fixed
        <<pctMale<<"% of the class total."<<endl;
    cout<<"Females are "<<setprecision(2)<<fixed
        <<pctFem<<" % of the class total"<<endl;
            
    //Exit stage right!
    return 0;
}

