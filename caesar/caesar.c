#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    // Check for the correct number (argc(argument count)) need stdlib.h
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Add string.h for strleng - make sure key is non-neg integer


}


