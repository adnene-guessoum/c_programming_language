#include <stdio.h>

// Print a histogram of the frequencies of different characters in its input.

#define MAX_CHAR 128

main() {
		int c, i, j;
		int char_freq[MAX_CHAR];

		for (i = 0; i < MAX_CHAR; ++i) {
				char_freq[i] = 0;
		}

		while ((c = getchar()) != EOF) {
				++char_freq[c];
		}

		for (i = 0; i < MAX_CHAR; ++i) {
				if (char_freq[i] > 0) {
						printf("%c: ", i);
						for (j = 0; j < char_freq[i]; ++j) {
								printf("*");
						}
						printf("\n");
				}
		}
}
