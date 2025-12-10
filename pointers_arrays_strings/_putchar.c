#include <unistd.h>
#include "main.h"

/**
 * _putchar - ekrana bir simvol çap edir
 * @c: çap olunacaq simvol
 *
 * Return: uğurla 1, səhv olduqda -1
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
