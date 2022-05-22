#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int flip();

int main ()
{
    int coin, counter, tails = 0, heads = 0;

    printf("\nA program that simulates Coin Tossing with a probability of getting half of Heads or Tails\n\n");

    for (counter = 1; counter <= 100; counter++)
    {
        coin =  flip (); 

        if(coin == 0)
        {
            printf("T ");
            tails = tails + 1;
        }
        else if( coin == 1)
        {
            printf("H ");
            heads = heads + 1;
        }
    }

//Total Count of Heads and Tails
    printf("\n\n--- TOTAL COUNT ---\n", heads);
    printf("Heads was tossed %d times\n", heads);
    printf("Tails was tossed %d times\n", tails);

}


int flip()
{
   
    return rand( ) % 2;

}