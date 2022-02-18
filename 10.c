#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("N: ");
    int rem = 0;
    int x = 0;
    while(n>0)
    {
        rem = n%10;
        n = n/10;
        x = x*10 + rem;
    }
    printf("ans: %i", x);
}