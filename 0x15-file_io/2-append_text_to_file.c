#include "main.h"

/**
 * append_text_to_file - function appends text to a file
 * @filename: file name.
 * @text_content: null terminated string.
 *
 * Return: 1 if successfull and -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fx;
	int nxlet;
	int wrx;

	if (!filename)
		return (-1);

	fx = open(filename, O_WRONLY | O_APPEND);

	if (fx == -1)
		return (-1);

	if (text_content)
	{
		for (nxlet = 0; text_content[nxlet]; nxlet++)
			;

		wrx = write(fx, text_content, nxlet);

		if (wrx == -1)
			return (-1);
	}

	close(fx);

	return (1);
}
