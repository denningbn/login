#include <iostream>
#include <stdlib.h>

int main()
{
	char *p;
	p = (char *)malloc(5 * sizeof(char));
	printf("Enter Username: ");
	scanf("%s", p);

	free(p);

	return 0;
}
