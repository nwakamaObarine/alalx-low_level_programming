/**
 * _strncat - appends src str to dest str
 * @dest: destination of new str
 * @src: source of str
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int DestLength, SrcLength;

	for (DestLength = 0; dest[DestLength] != '\0'; DestLength++)
		;
	for (SrcLength = 0; SrcLength < n; SrcLength++)
	{
		dest[DestLength] = src[SrcLength];
		DestLength++;
	}
	src[SrcLength] = n;
	return (dest);
}
