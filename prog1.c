#include <stdio.h>

void print_one()
{
    printf("One!\n");
}

void print_two()
{
    printf("Two!\n");
}

void print_three()
{
    printf("Three!\n");
}

int main()
{
    void (*print_functions[3])() = {print_one, print_two, print_three};

    for(int i = 0; i < 3; i++)
        print_functions[i]();

    return 0;
}