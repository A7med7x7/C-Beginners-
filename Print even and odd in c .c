#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n:  "); // ask the use input the value
                             // if dev.. operation here is the way to know if the this is a odd or even
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}