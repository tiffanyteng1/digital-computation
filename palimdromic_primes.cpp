//
//  main.cpp
//  a2_q1
//
//  Created by Tiffany Teng on 2020-10-08.
//  Copyright © 2020 Tiffany Teng. All rights reserved.
//

#include <iostream>

using namespace std;


// To test this, I entered the value 100. I was able to find a chart online about prime numbers under 100 to check the given values from my program. The only number under 100 that is panlindromic is 11 which would be correct. I checked all the ones that said it had an odd sum to verify the odd sum function
    //  I tested multiple numbers like :
        // 19: 2 is a prime number , 3 is a prime number and has an odd sum, 5 is a prime number and has an odd sum, 7 is a prime number and has an odd sum, 11 is a prime number and is palindromic, 13 is a prime number, 17 is a prime number, 19 is a prime number
        // since it was more difficult to to check the larger values, I checked random prime numbers, with symbolab,  and the palindromic and odd sums on paper to see if was correct
//it will work correctly  for the number of digits/bits that an int can hold, which can be fixed by using a long int
// efficiency is dependent on the user, for me over 1m of output seemed long and inefficient,
        //over about 180000 took over 1m to output



//[input] allow user to enter an integer greater than 1
void get_integer_value(int& value){ // get user input for the value they would like to check
    
    while (value < 1){ // error checking that values must be positive
        cout << "What value would you like to check? \n";
        cin >> value;
    }
}

//for primes less than 10,000, output if it is a palindromic prime

void check_palindromic(int primes_below, bool& is_palindromic){
    
    if (primes_below < 10000){
        
    // check the digits starting the count from the right is the same as from the left
        if (((primes_below % 10000/1000) == (primes_below % 10) &&  (primes_below % 1000/100)== (primes_below % 100/10))) {
        
                is_palindromic = true;
        
            }
        
        else if ((primes_below % 100/10) == (primes_below % 10) && (primes_below % 1000/100) == 0 && (primes_below % 10000/1000) == 0){
            is_palindromic = true;
            }
        
        else if ((primes_below % 1000/100) == (primes_below % 10) && (primes_below % 10000/1000) == 0 ){
            is_palindromic = true;
            }
        
        else {
            is_palindromic = false;
            }
    }
    
}


// add individual digits together and check if it is an odd number
void sum_odd(int primes_below, bool& is_odd){
    // check indiviual digits and add them
    // if modulus of the added digits is one, then it is odd
     // each prime number

    if ( primes_below < 100000){
       
        int sum = (primes_below % 100000/10000) + (primes_below % 10000/ 1000) + (primes_below % 1000/100) + (primes_below % 100 / 10) + (primes_below % 10) ;
        
        if ((sum % 2) == 1){
            is_odd = true;
            }
        else
            is_odd = false ;
    }
    else
        is_odd = false;
    
}


//[processing] step 1. find prime numbers that are equal or less than entered value


// check if it is a prime number (if there are no factors other than one and itself)

void check_primes(int value, bool is_odd, bool is_palindromic){

    
    for ( int primes_below = 2; primes_below <= value ; primes_below++){
       
        bool is_prime = true;
        
        for ( int factor = 2; factor < primes_below ; factor++ ){
           
            if ( primes_below % factor == 0){
                is_prime = false;
            }
        }
       
        if (is_prime == true){
            
            // step 2. if the number is a prime and less than 10,000, check if it is also a palindrome
            
            // check if it is a plaindrome and has an odd sum only if the number is a prime
            check_palindromic(primes_below, is_palindromic);
            
            // step 3. if the number is a prime and less than 100,000, check if the sum of the digits is odd
            sum_odd(primes_below, is_odd);
            
            //[outout] prime numbers and indicate if they are also palindromic and odd
            cout << primes_below << " is a prime number \n"; // output prime numbers
           
            if (is_odd == true ){ // output also if it has an odd sum
                cout << " and has an odd sum \n";
            }
            
            if ( is_palindromic == true ){ // output if it is palindromic
                cout << " and is palindromic.\n";
            }
            
        }
    
    }
    
}


int main(){
    
    //declare and initialize variables
    int value = 0;
    bool is_odd = false;
    bool is_palindromic = false;
   
    get_integer_value(value);
    check_primes(value,is_odd,is_palindromic);
    
}
