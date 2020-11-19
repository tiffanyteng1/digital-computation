//
//  main.cpp
//  a1_q1
//
//  Created by Tiffany Teng on 2020-09-18.
//  Copyright © 2020 Tiffany Teng. All rights reserved.
//
//, explain what values you used to test the program logic, and identify the valid range of values for which your program will work correctly.

// I manually calculated the values with a calculator to see how many of each weight would fit. I tested values such as 101, 10000, and 234567.
// the program can take the max value that an int would be able to hold 

#include <iostream>

using namespace std;


void weight_sort (){
    //int weight_given = 2048; ( 16 125lb weights, 1 42lb weights, 6 lb weights )
    //take user input for inital weight and set it to variable
    int weight_given = 0;
        cout << "Initial weight: ";
        cin >> weight_given;
    
    // find max number of 125lb weights needed and find remainder
    int weight125 = weight_given/125;
    weight_given = weight_given%125;
    
    // output the number of 125lb weights needed
        cout << weight125 << "  125lb weights.\n";
    
    //find max number of 75lb weights needed and find remainder
    int weight75 = weight_given/75;
    weight_given = weight_given%75;
    
    //output number of 75lbs needed
        cout << weight75 << "  75lb weights.\n";
    
    //find max number of 42lb weights needed and find remainder
    int weight42 = weight_given/42;
    weight_given = weight_given%42;
    
    // output number of 42lb weights needed
        cout << weight42 << "  42lb weights. \n";
    
    //find max number of 15lb weights needed and find remainder
    int weight15 = weight_given/15;
    weight_given = weight_given%15;
    
    //output number of 15lb weights needed
        cout << weight15 << "  15lb weights. \n";
    
    //number of 1 lb weights is the remainder
    int weight1 = weight_given;
    
    //output number of 1lb weights needed
    
        cout << weight1 << "  1lb weights. \n";
}

int main (){
    
    weight_sort();
     
}
