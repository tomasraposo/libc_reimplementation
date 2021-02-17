int atoi(char* str) {
	int n = 0;
	int sign = 1;
	if (str[0] == '-') {
		sign = -1;
		str++;
	}
	while (str) {
		if (*str < '0' || *str > '9') {
			break;
		}
		n = n * 10 + *str - '0';
		str++;
	}
	return sign * n;
}
