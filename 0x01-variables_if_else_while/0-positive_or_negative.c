#include <stdlib.h>

#include <time.h>

#include <stdio.h>

        /**
         * main - print if number is positive, zero or negetive
         * return: Always(success)
         *
         */
 int main(void)
{
    int n;

    
    srand(time(0));
    n = rand() -  RAND_MAX / 2;
    
    
      if (n > 0) 
      {
        printf("is positive\n", n);
    } 
      else if (n == 0) 
      {
        printf("is zero\n", n);
    } 
      else 
      {
        printf("is negative\n", n);
    }

    return (0);
    }