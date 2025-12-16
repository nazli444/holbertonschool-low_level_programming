#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argc; /* argc is unused, so we silence the warning */
    printf("%s\n", argv[0]);
    return 0;
}
