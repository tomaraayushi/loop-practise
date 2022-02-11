#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("N: ");
    int m = get_int("M: ");
    for( int i = n; i<= m; i++)
    {
        if( i%2 == 0)
        {
            printf("%i\n", i);
        }
    }
}