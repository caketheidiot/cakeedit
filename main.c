#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 8192
int main() {
    char rbg[BUF_SIZE];
    char *nm;
    
    nm = (char *) malloc(32);


    printf("\n");
    printf("Name: ");
    scanf("%s", nm);
    if (strlen(nm) > 12) {
        printf("ERROR: Filename exceeds 32 char limit \n");
        exit(1);
    }

    FILE *f = fopen(nm, "w");
        if (f == NULL) {
            printf("Error opening file.");
            exit(1);
        }
    printf("Type your file: \n");
    scanf("%s", rbg);
printf("%s", rbg);
printf("\n");
		
    

    if (strlen(rbg) > 8192) {
        printf("ERROR: File exceeds 8192 char limit \n");
        exit(1);
    }
    fprintf(f, " %s\n", rbg);
    
    
    free(nm);

    return 0;
}
