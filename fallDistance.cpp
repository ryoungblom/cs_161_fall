/**********************************
 ** Program Filename: fallDistance.cpp
 ** Author: reuben youngblom
 ** Date: October 19th 2016
 ** Description: This program takes the time something has fallen for, and passes that as an argument to the fallDistance function. That function puts it into the falling-distance-gravity-formula thing, and returns the result for outputting.
 ** Input: will take the time something has fallen for
 ** Output: should output the distance it has fallen over that time, in meters.
 **********************************/

#include <iostream>
using namespace std;

double fallDistance (double);  //prototype

/*
//main commented out
int main()
{
    
    double test;
    
    cout << "how long has this thing fallen for?" << endl;
    
    cin >> test;
    
    double output = fallDistance (test);
    
    cout << output << endl;
    
    return 0;
}
*/

double fallDistance (double time)  //function that takes time as an argument and will put it through the formula
{
    
    double dist;  //creates an output variable
    dist = (0.5 * (9.8 * (time * time)));  //formula for distance, given time
    
    return dist;  //returns distance as result of equation
    
}
