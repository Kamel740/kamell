char *found_unsigned(va_list usign)
{
	unsigned int i, res, temp, expo, count;
	char *string;

	res = va_arg(usign, unsigned int);
	count = i = 0;
	expo = 1;
	temp = res;
	while (temp >= 10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	string = malloc((count + 1) * sizeof(char));
	while (expo >= 1)
	{
		string[i++] = (((res / expo) % 10) + '0');
		expo /= 10;
	}
	return (string);
}
