#include <stdio.h>

int main(int argc, char *argv[])
{
        static int x = 0;
        static int y = 1;
        printf("%i,%i", x, y);
        return 0;
}

