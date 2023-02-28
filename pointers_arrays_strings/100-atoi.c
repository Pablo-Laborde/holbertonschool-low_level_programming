#include "main.c"

/**
 * _atoi(char *s)- function
 *
 * @s: input
 *
 * Return: int
 */
int _atoi(char *s)
{
	/* var declaration */
	int flag, sign, num, i;

	/* code */
	flag = 0;
	sign = 1;
	num = 0;
	i = 0;
	while (flag == 0)
	{
		if (str[i] == '\0')
			flag = 1;
		else
		{
			if (str[i] == '-')
				sign *= -1;
			if ((str[i] >= '0') && (str[i] <= '9'))
			{
				while ((str[i] >= '0') && (str[i] <= '9'))
				{
					num *= 10;
					num += (str[i] - 48);
					i++;
				}
				flag = 1;
			}
		}
		i++;
	}
	num *= sign;
	return (num);
}
