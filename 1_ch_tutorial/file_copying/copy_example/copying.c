#include <stdio.h>

/* copy input to output char by char; first version */

main() {
	int c;

	while ( (c = getchar()) != EOF ) {
		putchar(c);

		printf("\nc: %d\n", c);
		printf("EOF: %d\n", EOF);
		printf("c != EOF: %d\n", c != EOF);
	}

	printf("c != EOF: %d\n", c != EOF);      /* CTRL+D to send EOF, returns 0 */
}
