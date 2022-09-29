/**
* _pow_recursion - similar version of pow
* @x: integer one
* @y: integer two
* Return: results of x raised to y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return x * _pow_recursion(x, y - 1);
}
