//
//  main.cpp
//  a1_q2
//
//  Created by Tiffany Teng on 2020-09-25.
//  Copyright © 2020 Tiffany Teng. All rights reserved.
//

//To test this program, I used an online calculator that would find the sum of a series to double check for my answer. For example, when testing 42 to 32000, the number is far to large for me to compute both on my calculator and for me to do on paper. Therefore an online calculator was a quick way to double check
// The range of my program should be max value that a double or int can hold, which could be fixed by using a long


#include <iostream>

using namespace std;

// initialize variables
double first_number = 0;
double sum = 0;
double last_number = 0;
double difference = 1;

void sum_of_series(){
   
    // get user input of series
      cout << " Sum of series \n from: ";
      cin >> first_number ;
      cout << " to: ";
      cin >> last_number ;
      cout << "\n";
    
    // find sum of series
       sum = ( ( (last_number - first_number)+1) /2) * ( (2)*(first_number) + ( (last_number - first_number + 1) - difference));
       
    //change sum to an integer and output
    int new_sum = sum;
       
    cout << " Sum is " <<new_sum << "\n" ;
      
}

int main() {

    sum_of_series();
    
    // sum from 1 to 500 = 125250
    // sum from 5 to 2020 = 2041200
    // sum from 42 to 32000 = 512015139
    
}
