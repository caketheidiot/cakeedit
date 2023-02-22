/* This is CakeEdit v1.2.1 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char *str;
	char *nm;
	nm = (char *) malloc(8);
	str = (char *) malloc(4096);
	printf("NAME: \n");
	scanf("%s", nm);
	printf("FILE CONTENTS: \n");
	scanf("%s", str);
	
	printf("%s", str);
	printf("\n");
	
	
	FILE *f = fopen(nm, "w");
	if (f == NULL)
	{
	    printf("Error opening file! :( \n");
	    exit(1);
	}
	
	/* print some text */
	printf("Saving your stuff... \n");
	fprintf(f, " %s\n", str);
	free(str);
	free(nm);
	return 0;
}

