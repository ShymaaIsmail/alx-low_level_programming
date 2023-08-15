/**
 * _isalpha - checks char uis alpha or not
 * @c: char int val
 * Return: 1 when alphabet, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
