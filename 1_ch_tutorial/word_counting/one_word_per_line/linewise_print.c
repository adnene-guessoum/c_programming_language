#include <stdio.h>

// print input one word per line

#define IN 1 				 // inside a word
#define OUT 0				 // outside a word

main() {
	int c, state;
	state = OUT;

	while((c=getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			printf("\n");
		} else if (state == OUT) {
			state = IN;
		}

		if (state == IN)
			putchar(c);
	}
}
