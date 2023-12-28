#include <stdio.h>

// count blanks in input

main() {
	int c, nb;

	nb = 0;
	while((c = getchar()) != EOF)
		if (c == ' ')
			++nb;

	printf("number of blanks: %d\n", nb);
}
