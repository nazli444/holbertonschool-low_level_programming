#include "main.h"

/**
 * _puts - string çap edir və sonda newline əlavə edir
 * @str: çap olunacaq string
 */
void _puts(char *str)
{
    int i = 0;

    if (!str)  // təhlükəsizlik yoxlaması
        return;

    while (str[i] != '\0')  // yalnız \0-a qədər çap et
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');  // sonda newline
}
