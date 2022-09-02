#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters
 * Return: wr - numner of bytes to be printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *file_content;
	ssize_t rd;
	ssize_t wr;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	file_content = malloc(sizeof(char) * letters);
	rd = read(fd, file_content, letters);
	wr = write(STDOUT_FILENO, file_content, rd);

	free(file_content);
	close(fd);
	return (wr);
}
