#include <stdio.h>

// draw histogram of length of each word

main() {
	int c, word_length;

	word_length = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t'){
			if (word_length > 0) {
				printf("\n");
				word_length = 0;
			}
		} else {
			putchar('*');
			++word_length;
		}
	}
	printf("\n");
}
