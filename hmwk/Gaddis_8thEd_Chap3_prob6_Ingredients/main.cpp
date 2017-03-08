/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 08, 2017, 1:25 PM
 * Purpose:  Write a program that asks how many cookies one wants to make
 *           then output the ingredient amount.
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
    float sugar,butter,flour,//sugar,butter,flour
            oneSet,nCookie; //one Set of cookies, and number of cookies
                                  
    //Initialize variables
    oneSet=48;
  
    //Input data
    cout<<"Enter the number of cookies desired: ";
    cin>>nCookie;
    
    //Map inputs to outputs or process the data
    sugar=(1.5/oneSet)*nCookie;
    butter=(1/oneSet)*nCookie;
    flour=(2.75/oneSet)*nCookie;
    
    //Output the transformed data
    cout<<"Ingredients needed to make "<<nCookie<<" cookies are as follows:"<<endl;
    cout<<"Sugar needed = "<<sugar<<" cups."<<endl;
    cout<<"Butter needed = "<<butter<<" cups."<<endl;
    cout<<"Flour needed = "<<flour<<" cups."<<endl;
            
    //Exit stage right!
    return 0;
}

