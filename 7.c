#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("N ");
    int p = n;
    for( int i =1; i <= 10; i++)
    {
        p = n*i;
        printf("%i*%i = %i\n",n,i,p);
    }
}