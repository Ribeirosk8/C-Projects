#include <stdio.h>

//debug50 ./buggy

void print_column(int height);

int main(void)
{
    int h = get_int("Height: ");
    print_column(h);
}


void print_column(int height)
{
    for (int i = 0; i <= height; i++)
    {
        printf("#\n");
    }
}
