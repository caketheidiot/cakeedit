/* This is CakeEdit v1.2.3 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char *str;
	char *nm;
	char c;
	nm = (char *) malloc(12);
	str = (char *) malloc(4096);
	printf("NAME: \r\n");
	scanf("%4s", nm);
	if (strlen(nm) > 12) {
		printf("ERROR: Filename exceeds 12 char limit \r\n");
		exit(1);
	}
	if (strlen(str) > 4096) {
		printf("ERROR: File contents exceeds 4096 char limit");
		exit(1);
	}
	FILE *f = fopen(nm, "w");
        if (f == NULL)
        {
            printf("Error opening file! :( \r\n");
            exit(1);
        }
	printf("EXISTING CONTENTS: ");
	c = fgetc(f);
    while (c != EOF)
    {
        c = fgetc(f);
        printf("%c", c);
    }
	printf("FILE CONTENTS: \r\n");
	scanf("%4s", str);
	printf("\r\n");
	/* print some text */
	printf("Saving your stuff... \r\n");
	fprintf(f, " %s\r\n", str);
	free(f);
	free(str);
	free(nm);
	free(c);
	return 0;
}
