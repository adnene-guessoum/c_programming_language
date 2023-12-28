#include <stdio.h>

// count tabs in input

main() {
	int c, nt;

	nt = 0;
	while((c = getchar()) != EOF)
		if (c == '\t')
			++nt;

	printf("number of tabs: %d\n", nt);
}
