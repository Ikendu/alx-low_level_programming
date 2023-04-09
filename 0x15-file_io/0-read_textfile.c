#include "main.h"
/**
 * read_textfile - reads text file then prints the contents
 * @filename: file to read.
 * @letters: numbers of letters to read.
 *
 * Return: number of letters on success or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t xr, xw;
	char *buff;

	if (!filename)
		return (0);

	fn = open(filename, O_RDONLY);

	if (fn == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	xr = read(fn, buff, letters);
	xw = write(STDOUT_FILENO, buff, xr);

	close(fn);

	free(buff);

	return (xw);
}
