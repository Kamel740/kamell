char *found_int(va_list npoint)
{
	int n;
	int i, res, temp, expo, count;
	char *string;

	n = va_arg(npoint, int);
	count = i = 0;
	expo = 1;
	n >= 0 ? (res = n * -1) : (res = n, count++);
	temp = res;
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	string = malloc((count + 1) * sizeof(char));
	if (n < 0)
		string[i++] = '-';
	while (expo >= 1)
	{
		string[i++] = (((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
	return (string);
}
