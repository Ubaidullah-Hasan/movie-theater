#include <stdio.h>
#include <string.h> // for strcmp() function
#include <stdlib.h>

// function for 40 symbol print
void symbo40(char symbol)
{
    printf("%*s", 30, ""); // space 30 then start symbol print
    for (int a = 1; a <= 40; a++)
    {
        printf("%c", symbol);
    }
    printf("\n");
}
// 2 line break
void lineBreake2()
{
    printf("\n\n");
}

void space40()
{
    printf("%*s", 40, "");
}

// Normal formating text
void normalText(char text[150])
{
    space40();
    printf("%s\n", text);
}

int scanfIntNumber()
{
    int x;
    space40();
    scanf("%d", &x);
    space40();
    printf("You choose: %d", x);
    lineBreake2();
    return x;
}
// heading
void heading(char headingText[50])
{
    symbo40('*');
    space40();
    printf("%s\n", headingText);
    symbo40('*');
    lineBreake2();
}

int main()
{
    lineBreake2();
    heading("Movie Theater");
    normalText("Choose A Option");
    symbo40('=');
    normalText("1. Add Movie");
    normalText("2. Display All Movies");
    normalText("3. Delete Movie");
    normalText("4. Exit");
    lineBreake2();
    scanfIntNumber();
    lineBreake2();
}