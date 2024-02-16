#include <stdio.h>
#include <stdarg.h>

void test_vprintf(char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	vfprintf(stderr, fmt, ap);
}

int main(int argc, char **argv) {
	char *fmt = "%s, %d\n";
	test_vprintf(fmt, "test1", "test2", 123);
	return 0;
}
