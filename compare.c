#include <cs50.h>
#include <stdio.h>

//cc compare.c -o compare cs50.c

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is not less than y\n");
    }
    if (x == y)
    {
        printf("x is equal to y\n");
    }
}