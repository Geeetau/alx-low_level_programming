#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: A pointer to the name of the file
 * @letters: The number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *abc;

	if (filename == NULL)
		return (0);

	abc = malloc(sizeof(char) * letters);
	if (abc == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, abc, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(abc);
		return (0);
	}
	free(abc);
	close(o);

	return (w);
}
