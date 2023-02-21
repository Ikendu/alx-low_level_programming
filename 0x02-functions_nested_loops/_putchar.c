#include <unistd.h>

/**
 * _putchar - this program write char to output
 * @c: The charater to output
 *
 * Return: On success 1
 * On error, -1 is returned, and err no is shown
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
