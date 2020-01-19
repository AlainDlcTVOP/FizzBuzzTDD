#include <stdio.h>
#include <stdlib.h>
#include "../lib/fizz.h"

int main(int argc, char const *argv[])
{
   

  for (unsigned int i = 1; i <= 100; i++) 
    {

   fizzbuzz(i);

    }
    
    return 0;
}
