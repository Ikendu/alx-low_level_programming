#include "main.h"

/**
 * create_file - creates a file function
 * @filename: name of the file
 * @text_content: contents of the file.
 *
 * Return: 1 if it succeed. -1 if not.
 */
int create_file(const char *filename, char *text_content)
{
	int fx;
	int numlet;
	int wrx;

	if (!filename)
		return (-1);

	fx = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fx == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numlet = 0; text_content[numlet]; numlet++)
		;

	wrx = write(fx, text_content, numlet);

	if (wrx == -1)
		return (-1);

	close(fx);

	return (1);
}
