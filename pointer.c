#include <stdio.h>

int main() {
	char *c = "abd";
	printf("*c: %d\n", *c);
	c++;
	printf("*c(after ++c;): %d\n", *c);
	c++;
	printf("*c(after ++c; ++c;): %d\n", *c);
	//c++; // Segmentation Fault 
	//printf("*c(after ++c; ++c; ++c;): %d\n", *c);

	//char *array1[] = { 'f', 'a', 'b', 'c' };
	//printf("sizeof(array): %ld\n", sizeof(array1));
	//printf("sizeof(*array): %ld\n", sizeof(*array1));

	char *array2[] = { "foo", "a", "bb", "ccc" };
	printf("sizeof(array): %ld\n", sizeof(array2));
	printf("sizeof(*array): %ld\n", sizeof(*array2));

	char *str_array[] = { "a", "bb", "ccc" };
	for (int i = 0; i < sizeof(str_array) / sizeof(str_array[0]) + 1; i++)
		printf("str_array[%d]: %s\n", i, str_array[i]); // Segmentation Fault at last element
	return 0;
}
