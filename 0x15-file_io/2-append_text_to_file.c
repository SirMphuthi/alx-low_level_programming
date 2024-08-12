#include "main.h"

/**
 * _strlen - checks length
 * @str: string pointer
 *
 * Return: total len
 *
 */
size_t _strlen(char *str)
{
	size_t m;

	for (m = 0; str[m]; m++)
		;
	return (m);
}


/**
 * append_text_to_file - appends texts to file
 * @filename: name of file
 * @text_content: added string to file
 *
 * Return: 1 when done, -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int as;
	ssize_t l;

	if (filename == NULL)
		return (-1);

	as = open(filename, O_WRONLY | O_APPEND);

	if (as == -1)
		return (-1);
	if (text_content != NULL)
		l = write(as, text_content, _strlen(text_content));
	close(as);

	if (l == -1)
		return (-1);
	return (1);
}


