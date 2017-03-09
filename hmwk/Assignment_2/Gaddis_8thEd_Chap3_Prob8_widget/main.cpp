/* 
 * File:   main.cpp
 * Author: Lyndon Vanluesauls
 * Created on March 9, 9:15 AM
 * Purpose:  Calculate how many widgets are on a pallet
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
    float widget=12.5, nWidget, // Widget,# of Widgets
            ePallet, fPallet;  //empty Pallet & full Pallet                                          
    
    //Input data
    cout<<"How much does the pallet weigh empty in lbs? ";
    cin>>ePallet;
    cout<<"How much does the pallet weigh with widgets stacked on it? ";
    cin>>fPallet;
    
    //Map inputs to outputs or process the data
    nWidget=(fPallet-ePallet)/widget; //number of widgets calculation
    
    //Output the transformed data
    cout<<"There are "<<nWidget<<" # of widgets on the pallet.";
    
    //Exit stage right!
    return 0;
}

