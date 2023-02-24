/* This is CakeEdit v1.2.1 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char *str;
	char *nm, c;
	nm = (char *) malloc(12);
	str = (char *) malloc(4096);
	printf("NAME: \n");
	scanf("%s", nm);
	if (strlen(nm) > 12) {
		printf("WARNING: FILENAME EXCEEDS 12 CHAR LIMIT \n");
	}
	FILE *f = fopen(nm, "w");
        if (f == NULL)
        {
            printf("Error opening file! :( \n");
            exit(1);
        }
	printf("EXISTING CONTENTS: ");

	c = fgetc(f);
    while (c != EOF)
    {
        c = fgetc(f);

        printf("%c", c);
        
    }


	printf("FILE CONTENTS: \n");
	scanf("%s", str);
	
	printf("%s", str);
	printf("\n");
	
	
	
	
        

	/* print some text */
	printf("Saving your stuff... \n");
	fprintf(f, " %s\n", str);
	free(f);	
	free(str);
	free(nm);
	return 0;
}

