/*
**** *******Problem Statement**********

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include <stdio.h>
#include <math.h>


void printPrimeFactors(long int n){

    // divide out all roots of 2 out of input
    while (n % 2){
        n = n/2;
    }

    printf("~ Prime Factors ~\n");

    // try all odd numbers starting from 3 to sqrt of 
    for (int i = 3; i < sqrt(n); i += 2){

        while(n % i == 0){
            printf("%ld\n", n);
            n = n/2;
        }
    }

    // when n is prime number greater than 2
    if (n > 2){
        printf("%ld\n", n);
    }
}

int main(){

    // we need a loop that calulates which numbers are prime

    long int number = 600851475143;

    printPrimeFactors(number);
}