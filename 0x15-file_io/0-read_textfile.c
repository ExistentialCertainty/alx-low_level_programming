#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: text file to be read and printed
 * @letters: number of letters to be read and printed
 * Return: amount of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t op_file, rd_file, wr_file;

	op_file = open(filename, O_RDONLY);
	if (op_file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	rd_file = read(op_file, buffer, letters);
	wr_file = write(STDOUT_FILENO, buffer, rd_file);

	free(buffer);
	close(op_file);
	return (wr_file);
}
