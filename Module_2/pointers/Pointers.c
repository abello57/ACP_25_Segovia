#include <stdio.h>
intmain() {
	int var= 20; /* actual variable declaration */
	int *ip; /* pointer variable declaration */

	ip = &var; /* store addressofvarin pointer variable */

	printf("Address of var variable: %x\n", &var);

	/* address stored in pointer variable */
	printf("Address stored in ip variable: %x\n", ip);

	/* access the value using the pointer */
	printf("Value of *ipvariable: %d\n", *ip);

	return 0;
}