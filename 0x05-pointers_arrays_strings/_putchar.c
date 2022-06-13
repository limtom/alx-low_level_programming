#include <unistd.h>

/**
 * _putchar- write to the standard output without
 * printf and put
 * @c: Parameter to print
 * Returns: return 1 success
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
