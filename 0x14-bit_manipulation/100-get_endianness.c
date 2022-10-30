/**
* get_endianness - ends endianness
* Return: 0 if big endian, 1 if small endian
*/
int get_endianness(void)
{
	int n = 0x00000001;
	char *ptr;

	ptr = (char *) &n;
	return (ptr[0]);
}
