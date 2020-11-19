//
//  main.cpp
//  a2_q2
//
//  Created by Tiffany Teng on 2020-10-08.
//  Copyright © 2020 Tiffany Teng. All rights reserved.
//

#include <iostream>

using namespace std;

//To test this program, I checked the all the values with the calculater and paper by putting the seconds through the function and I solved on paper at what time the ball would hit the ground after a 15000 m drop
// The range of my program should be the max value that a double or int can hold, but since it does not take in input, the program should be the same unless the distance it is dropped from is changed


// output  distance the ball traveled in each interval and the total interval for 30s
void track_distance (){

    //initialize and declare variables
    double interval_distance = 0;
    double total_distance = 0;
    
    //set precision to 3 decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    
    for (int t = 0; t < 31; t++){
        
            cout << t << " seconds \n";
        
        // find total distance
        total_distance = (4.903325)*(t*t);
            cout << "   Traveled " << total_distance << " m in total. \n";
        
        // find the distance covered only in one interval
        if ( total_distance != 0){
            interval_distance = total_distance - (4.903325)*((t - 1)*(t - 1));
            cout << "   Traveled " << interval_distance << " m in this interval. \n \n";
        }
    }
}


// find how many seconds it takes to hit the ground if the drone drops the ball at 15000m
void drone_distance(){
   
    // initialize and declare variables
   
    double total_distance = 0;
  
    //set precision to 3 decimal places
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);
    
    
    
    // increment time by 0.1s up until 15000m
    for (double time_passed = 0; total_distance <= 15000 ; time_passed += 0.1 ){
         
            cout<< time_passed<< " s passed.\n" ;
        
        total_distance = (4.903325)*(time_passed*time_passed);
            cout<< "   " << total_distance<< " m traveled in total.\n";
        
        // find the distance covered only in one interval
        if ( total_distance != 0){
            double interval_distance = total_distance - (4.903325)*((time_passed - 0.1)*(time_passed - 0.1));
                cout << "   Traveled " << interval_distance << " m in this interval. \n \n";
        }
    
        
        // print if the distance is just over 15000
        if (total_distance >= 15000){
            cout << "It takes "<< time_passed << " s to reach the ground when dropped from 15000m. \n";
        }
    }
}

int main() {
   
    // use functions
    track_distance();
    drone_distance();
    
}
