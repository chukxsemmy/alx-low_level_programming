#include "main.h"

/**
 * append_text_to_file - Appends text to file.
 * @filename: A pointer to filename
 * @text_content: text string.
 * Return: -1 if it fails or exists but no with no write permission
 * else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
			text_len++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(po, text_content, text_len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
