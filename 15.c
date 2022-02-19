#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int n = get_int("X: ");
    int k = 1;
    for( int i = 1; i <= n; i++)
    {
        for(int j = 0; j <i; j++)
        {
            printf("%i ", k);
            k++;
        }
        printf("\n");
    }
}