#include <stdio.h>
#include "main.h"
/**
 * create_file - A function that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int filedesc, roll, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	filedesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	roll = write(filedesc, text_content, len);

	if (filedesc == -1 || roll == -1)
	{
		return (-1);
	}
	close(filedesc);
	return (1);
}

