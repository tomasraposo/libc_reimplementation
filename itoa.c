char* itoa(int n) {
	if (n > INT_MAX) {
		fprintf(stderr, "Potential integer overflow.");
		exit(1);
	}
	int temp = n, len;
	char *str;
	if (n == 0) {
		*str = '\0';
		*str++ = '0';
		return str;
	} 
	if (n > 0) { 
		len = 0;
	} else { 
		len = 1;
		*str = '-'; /* accommodate '-' sign */
	}
	while (temp) {
		temp /= 10;
		len++;
	}
	str = malloc(len * sizeof(char));
	if (!str) {
		fprintf(stderr, "%s\n.", "Unable to allocate sufficient memory.");
		exit(1);
	}
	temp = n;
	int i = len-1;
	while (temp) {
		*(str+i) = temp % 10 + '0';
		temp /= 10;
		i--;
	}
	return str;
}
