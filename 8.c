#include <cs50.h>
#include <stdio.h>

int main(void)

{
    long n = get_long("N: ");
    long l = 0;
    while(n>0)
    {
        int r = n%10;
        n = n/10;
        l++;
    }
    printf("%li\n", l);
}