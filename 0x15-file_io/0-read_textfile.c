#include "main.h"
#include <stdlib.h>

/**
 * test 1

 * Return: test
 *        
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t sd;
	ssize_t w;
	ssize_t t;

	sd = open(filename, O_RDONLY);
	if (sd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(sd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(sd);
	return (w);
}
