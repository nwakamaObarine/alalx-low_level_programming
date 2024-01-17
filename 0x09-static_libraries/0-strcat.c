/**
 * _strcat - appends src str to dest str
 * @dest: destination of new str
 * @src: source of str
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int DestLength = 0, SrcLength = 0;

	while (dest[DestLength] != '\0')
	{
		DestLength++;
	}
	while (src[SrcLength] != '\0')
	{
		dest[DestLength] = src[SrcLength];
		SrcLength++;
		DestLength++;
	}
	src[SrcLength] = '\0';
	return (dest);
}
