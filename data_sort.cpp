//
//  main.cpp
//  activity 7
//
//  Created by Tiffany Teng on 2020-10-16.
//  Copyright © 2020 Tiffany Teng. All rights reserved.
//

#include <iostream>

using namespace std;

void ra7_q1(){
    //step0. initialize and declare variables
    int array_size = 0;
    int my_array[20] = {0}; // initialize array
    srand(time(0)); // sets randomization seed
    
    //step 1. set array size
    
    cout << "what size is your array?\n" ;
    cin >> array_size;
    
    //step 2. populate array
    for (int index = 0 ; index < array_size; index++) {
        int entry = 0;
        cin >> entry;
        
        my_array[index] = entry + rand() %100; // store updated values
    }
    
    //step3 output array values in revers
    
    for (int index = array_size - 1 ; index >= 0; index--) {
        cout << my_array[index] << endl;
    }
}

// PURPOSE: performs bubble sort to sort a given array in ascending order
void ra7_q2(){
    // step 0. declare and initialize variables
    
    bool is_sorted = false;
    int unsorted_data[10] = { 12, 12,43,12,65, 6,5,3,23,12};
    
    //step1. apply bubble sort to sort the array values
    while (!is_sorted) { // step 1.1 keeep going while the array is still unsorted
        bool swap_performed = false;
        
        //step 1.1.1. keep checking if there is a pair that is out of order
        
        for (int index = 0; index < 9; index++) {
            //step 1.1.2. perform the swap is pair is out of order
            
            if (unsorted_data[index] < unsorted_data [index + 1]){
                int temp = unsorted_data[index]; // swap 2 adjacent values
                
                unsorted_data[index] = unsorted_data[index + 1];
                unsorted_data[index + 1] = temp;
                
                swap_performed = true;
            }
        }
        
        //step1.2 check if the array is sorted based on number of swaps performed
        is_sorted = !swap_performed;
    }
    //step 2. output sorted array results
    for (int index = 0 ; index < 10 ; index++) {
        cout << unsorted_data[index]<< endl;
    }
}


int main() {
    ra7_q1();
    ra7_q2();
}
