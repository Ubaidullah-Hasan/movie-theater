#include <stdio.h>

void space40 ()
{
    printf("%*s", 40, ""); // 40 is the total width of the output
}

void symbo40 (char symbol)
{
    printf("%*s", 30, ""); // 40 is the total width of the output
    for(int a = 1; a <= 40; a++)
    {
        printf("%c", symbol);
    }
    printf("\n");
}

int main()
{
    symbo40('*');
    space40();
    printf("Hello word");
    return 0;
}
