#include <stdio.h>

// copying input to output and replacing multiple blanks by one only

main () {
	int c, previous_c;

	previous_c = 'a';                        // arbitrary non blank character
	while ((c = getchar()) != EOF) {

		if (previous_c != ' ')
			putchar(c);

		if (previous_c == ' ' && c != ' ')
			putchar(c);

		previous_c = c;
	}
}
