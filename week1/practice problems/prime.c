// You are to complete the Boolean function, prime, which tests if a number is prime, and returns true if it is, and false if it is not.

// The easiest way to check if a number is prime, is to try dividing it by every number from 2 up to, but not including, the number
// itself. If any number divides into it with no remainder, that number is not prime.

// The main function in the distribution code contains a for loop that iterates through the range specified by the user, with both
// ends inclusive. For example, if the user types in 1 for min and 100 for max, the for loop will test each number, 1 to 100. Each of
// these numbers is passed to a function, prime, that you will implement to return either true or false depending on whether the number
// is prime.

#include <stdio.h>
#include <stdbool.h>

// so dont do the up to the number, divide it by 2 and then do the numbers up to that one may need a float for odd numbers

// division is slow \ try to do a multiplication work around \ start with division formula if needed then invert the formula

// this will need to be like this for i in range(1,100): if prime(i): print(i)

int main(void)
{
    int is_prime = 1;

    for (int kickstarter_start_up = 2; kickstarter_start_up < 100; kickstarter_start_up++)
    {
        is_prime = 1;
        for (int i = 2; i <= kickstarter_start_up / 2; i++)
            {
            if (kickstarter_start_up % i == 0)
            {
                is_prime = 0;
                break;
            }
            }
            if (is_prime){
                printf("%d\n", kickstarter_start_up);
            }
    }

    return 0;
}

