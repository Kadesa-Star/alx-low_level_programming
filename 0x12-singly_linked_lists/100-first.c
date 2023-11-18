#include <stdio.h>
/**
 * myfunc - consructor att. to execute prior to main
 *
 */
void myfunc(void) _attribute_((constructor));

/**
 * mymainfunc - the implementationn part of the above
 */
void myfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("bore my house upon my back!\n");
}
