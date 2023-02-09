#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of the file
 * @text_content:  is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int abc;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	abc = open(filename, O_WRONLY | O_APPEND);
	if (abc == -1)
		return (-1);
	if (text_content != NULL)
		len = write(abc, text_content, _strlen(text_content));
	close(abc);
	if (len == -1)
		return (-1);
	return (1);
}
