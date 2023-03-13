#include <stdio.h>
#include <string.h>

int main(void)
{
    struct developers
    {
        char name;
        char aliase;
    }d1;
    struct developers d1 = {"Mathis Stützle", "Student"};

    /*d2;
    struct developers d2 = {"Linus Hahne", "Student"};
    */

    printf("%s", d1.name);
    printf("%s", d1.aliase);
/*
    printf("%s", d2.name);
    printf("%s", d2.aliase);
    */
}

