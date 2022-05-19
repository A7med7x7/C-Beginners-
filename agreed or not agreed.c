#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt the user to agree
    char c = get_char("do u agree ?");
    // n for not agreed y for agreed
    if (c == 'Y' || c == 'y')
    {
        printf("agreed\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("not agreed\n ");
    }
}