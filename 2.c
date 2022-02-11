#include <cs50.h>
#include <stdio.h>

int main(void)
{
    unsigned int n = get_int("N: ");
    int i = n;
    while(i>=1)
    {
        printf("%i\n", i);
        i--;
    }
}