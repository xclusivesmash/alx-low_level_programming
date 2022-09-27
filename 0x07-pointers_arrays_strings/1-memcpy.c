/**
* *_memcpy - copies n bytes form memory area src to
* memory area dest.
* @dest: memory area to copy to
* @src: memory area to copy from
* @n: numbers of bytes to copy
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int length = n;

	if (length > 0)
	{
		int i;

		for (i = 0; i < length; i++)
		{
			*(dest + i) = *(src + i);
		}
	}
	return (dest);
}
