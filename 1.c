#include <cs50.h>
#include <stdio.h>

int main(void)
{
    unsigned int n = get_int("N: ");
    int i = 1;
    while(i<=n)
    {
        printf("%i\n", i);
        i++;
    }
}