#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius = 0, 10, ..., 100 */

main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;  	 /* lower limit of temp table */
	upper = 100;	 /* upper limit of temp table */
	step = 10;  	 /* step size of temp table */

	celsius = lower;
	printf("%s\t%s\n", "Celsius :", "Fahrenheit :");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%7.1f\t%10.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
