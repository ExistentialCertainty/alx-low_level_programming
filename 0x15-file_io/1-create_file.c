#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: 1 (Success) -1 (Failure).
 */
int create_file(const char *filename, char *text_content)
{
	int op_file, wr_file, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr_file = write(op_file, text_content, len);
	if (op_file == -1 || wr_file == -1)
	{
		return (-1);
	}
	close(op_file);
	return (1);
}
