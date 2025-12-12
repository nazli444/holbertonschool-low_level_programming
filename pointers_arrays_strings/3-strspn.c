while (*s)
{
	a = accept;
	while (*a)
	{
		if (*s == *a)
			break;
		a++;
	}
	if (!*a)
		return (count);
	count++;
	s++;
}
