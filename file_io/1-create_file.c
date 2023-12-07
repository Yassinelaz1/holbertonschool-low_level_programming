#include "main.h"
/**
 *create_file- function that creates a file.
 *@filename:name of the file
 *@text_content:content of the file
 *Return: 1 on success or -1
 */
int create_file(const char *filename, char *text_content)
{
	int FILE;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "\0";

	FILE = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (FILE == -1)
		return (-1);

	len = strlen(text_content);

	write(FILE, text_content, len);

	return (1);
}