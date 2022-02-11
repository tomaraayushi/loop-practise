#include <cs50.h>
#include <stdio.h>

int main(void)
{
    unsigned int n = get_int("N: ");
    for( int i = n; i>0 ; i--) // i < (n+1) is not required. it works without it as well
    {
        printf("%i\n", i);
    }
}