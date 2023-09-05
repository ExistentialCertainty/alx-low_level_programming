#include "main.h"
/**
 * append_text_to_file -  a function that appends
 * text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: 1 (Success) -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
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
	op_file = open(filename, O_WRONLY | O_APPEND);
	wr_file = write(op_file, text_content, len);
	if (op_file == -1 || wr_file == -1)
	{
		return (-1);
	}
	close(op_file);
	return (1);
}
