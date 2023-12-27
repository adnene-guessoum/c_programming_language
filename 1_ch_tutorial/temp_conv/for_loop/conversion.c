#include <stdio.h>

/* print fahr to celsius table using for loop */

/* using symbolic constants */

#define LOWER 0             /* lower limit of the conversion table */
#define UPPER 300           /* upper limit of the conversion table */
#define STEP 20             /* step size */

main() {
	int fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
		printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
	}
}
