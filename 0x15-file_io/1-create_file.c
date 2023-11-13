#include "main.h"

/**
 * test 2
 */
int create_file(const char *filename, char *text_content)
{
	int sd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	sd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(sd, text_content, len);

	if (sd == -1 || w == -1)
		return (-1);

	close(sd);

	return (1);
}
