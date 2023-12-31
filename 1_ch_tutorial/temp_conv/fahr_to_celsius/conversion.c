#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;  	 /* lower limit of temp table */
	upper = 300;	 /* upper limit of temp table */
	step = 20;  	 /* step size of temp table */

	fahr = lower;
	printf("%s\t%s\n", "Fahrenheit :", "Celsius :");
	while (fahr <= upper) {
		/* celsius = 5 * (fahr - 32) / 9; integral division truncates but not float division */
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%10.0f\t%7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
