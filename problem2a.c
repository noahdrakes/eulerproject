/*
**** *******Problem Statement**********

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

*/



// Method: Recursion 
#include <stdio.h>

int FibSequence(int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    } else {
        return (FibSequence(n-2) + FibSequence(n-1));
    }
    
}

int main(){
    int sum = 0;

    int i = 0;
    while(1){
        if (FibSequence(i) % 2 == 0){
            sum = sum + FibSequence(i);
            printf("sum: %i \n", sum);
        }

        if (FibSequence(i) >= 4000000){
            break;
        }


        i++;
    }

    printf("proccess finished ! total sum of first 4 million even fib numbers: %i \n", sum);

}