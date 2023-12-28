#include <stdio.h>

// replacing tabs, backspaces and newlines by their symbol

main () {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			printf("\\n");

		if (c == '\b')
			printf("\\b");

		if (c == '\t')
			printf("\\t");

		if (c == '\\')
			printf("\\");

		putchar(c);
	}
}
