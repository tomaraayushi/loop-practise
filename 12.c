#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("N: ");
    int temp = n;
    int sum = 0;
    int r = 0;
    while(n>0)
    {
        r = n % 10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    if(temp == sum)
    {
        printf("armstrong number\n");
    }
    else
    {
        printf("not an armstrong number\n");
    }
}