#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("N: ");
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            printf("%i\n", i);
        }
    }
}