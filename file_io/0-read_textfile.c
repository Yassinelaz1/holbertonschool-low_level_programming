#include "main.h"
/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @letters:size
 * @filename:char
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int FILE;
	char buffer;
	int length;

	if (filename == NULL || !letters)
	{
		return (0);
	}

	FILE = open(filename, O_RDONLY);
	length = read(FILE, &buffer, letters);
	length = write(STDOUT_FILENO, &buffer, length);
	if (FILE == -1)
	{
		return (0);
	}

	close(FILE);
	return (length);
}