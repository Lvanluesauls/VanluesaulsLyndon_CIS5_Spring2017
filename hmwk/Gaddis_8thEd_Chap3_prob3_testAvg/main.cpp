/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 08, 2017, 12:44 PM
 * Purpose:  Calculate Average Test score.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Output - Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float test1,test2,test3,test4,test5,average;
    
    //Input data
    cout<<"Enter the score of test 1 as an integer. ";
    cin>>test1;
    cout<<"Enter the score of test 2 as an integer. ";
    cin>>test2;
    cout<<"Enter the score of test 3 as an integer. ";
    cin>>test3;
    cout<<"Enter the score of test 4 as an integer. ";
    cin>>test4;
    cout<<"Enter the score of test 5 as an integer. ";
    cin>>test5;
    
    //Map inputs to outputs or process the data
    average=(test1+test2+test3+test4+test5)/5;
    
    //Output the transformed data
    cout<<"The average of all test scores is "
        <<setprecision(1)<<fixed<<average<<".";    
            
    //Exit stage right!
    return 0;
}

