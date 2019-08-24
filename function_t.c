//
// Exercise in calling a function from main in C.
// Nathan Maynes, 08 24 2019
//

#include <stdio.h>

int fizzbuzz(int m);

/*  */

int main()
{

    int i;

    for (i = 1; i < 30; ++i)
        fizzbuzz(i);

    return 0;
}

/* fizzbuzz: check whether a number is divisible by 3, 5, or both.
 * Print Fizz, Buzz, or FizzBuzz respectively. */

int fizzbuzz(int m)

{

    if (m % 3 == 0)
        printf("Fizz");
    if (m % 5 == 0)
        printf("Buzz");
    if ((m % 3 != 0) && (m % 5 != 0))
        printf("%d", m);
    printf("\n");

}
