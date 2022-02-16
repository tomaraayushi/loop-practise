#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("N: ");
    int l = 0;
    int i, first, last;
    int middle = n;
    int temp = n;
    while(temp>0)
    {
        int r = temp%10;
        temp = temp/10;
        l++;
    }
    int power = 1;
    for(i = 0; i < (l-1); i++)
    {
        power = power*10;
    }
    first = n / power;
    last = n % 10;
    middle = middle%power;
    middle = middle/10;
    int ans = last*power + middle*10 + first;
    printf("ans: %i\n", ans);



}