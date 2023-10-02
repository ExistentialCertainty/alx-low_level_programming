#include <stdio.h>
#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: pointer to address of file
 * @letters: file to be read
 * Return: 0 if filename is null, if file cannot be opened or read
 * otherwise, returns number of letters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filedesc;
	ssize_t roll;
	ssize_t reel;

	filedesc = open(filename, O_RDONLY);
	if (filedesc == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	reel = read(filedesc, buffer, letters);
	roll = write(STDOUT_FILENO, buffer, reel);

	free(buffer);
	close(filedesc);
	return (roll);
}
