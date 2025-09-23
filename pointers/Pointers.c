#include <stdio.h>
int main() {
	int var = 20;/* actual variable declaration*/
	int *ip; /* pointer variable declaration*/

	ip = &var;/* store addressofvarin pointer variable*/

	printf("Addressofvarvariable: %x\n", &var);

	/* addressstoredin pointer variable */
	printf("Addressstoredin ipvariable: %x\n", ip);

	/* accessthevalueusingthepointer */
	printf("Valueof*ipvariable: %d\n", *ip);

	return 0;
}