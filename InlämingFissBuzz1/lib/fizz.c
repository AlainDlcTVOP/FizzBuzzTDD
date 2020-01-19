#include "fizz.h"
#include <stdio.h>

#define FIZZ 3
#define BUZZ 5
#define FIZZBUZZ 15

int  fizzbuzz(int i) 
{
  
        

        if (!(i % FIZZBUZZ))
            printf ("FizzBuzz\n");
        else if (!(i % FIZZ))
            printf ("Fizz\n");
        else if (!(i % BUZZ))
            printf ("Buzz\n");
        else
            printf ("%d\n", i);
    return i;
     
    

}