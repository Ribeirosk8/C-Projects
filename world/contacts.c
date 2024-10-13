#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? ");
    int age = get_int("What is yours age? ");
    string number = get_string("What is your phone number? ");

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Number: %s\n", number);
}
