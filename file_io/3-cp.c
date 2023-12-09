#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc : n argument
 * @argv: arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	if (argc != 3)
	{
		dprintf("Usage: cp file_from file_to\n"), exit(97);
	}

	char c;

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	char buffer[1024];
	int READ = 1, WRITE;
	while (READ != NULL)
	{
		READ = read(file_from, buffer, 1024);
		if (READ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (0 < READ)
		{
			WRITE = write(file_to, buffer, READ);
			if (WRITE != READ || -1 == WRITE)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	}
	return(0)
}
