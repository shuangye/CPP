#include <stdarg.h>

int maxof(int n_args, ...){	
	int max, a;
	va_list ap;

	va_start(ap, n_args);
	max = va_arg(ap, int);
	for (int i = 2; i <= n_args; i++) {
		if ((a = va_arg(ap, int)) > max)
			max = a;
	}

	va_end(ap);
	return max;
}

void test_stdarg(void) {
	int i = 5;
	int j[256];
	j[42] = 24;
	
	printf("%d\n", maxof(3, i, j[42], 0));
}
