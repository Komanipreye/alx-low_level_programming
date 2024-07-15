/**
 * _strcpy - string copy function
 *
 * @dest: pointed by
 * @src: pointred to by scr
 * Return: returns 0 success
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
