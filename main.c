#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *rbg;
    char *nm;

    nm = (char *) malloc(32);
    rbg = (char *) malloc(8192);
    printf("Name: ");
    scanf("%s", nm);
    if (strlen(nm) > 12) {
        printf("ERROR: Filename exceeds 12 char limit");
        exit(1);
    }
    if (strlen(rbg) > 4096) {
        printf("ERROR: File exceeds 4096 char limit");
        exit(1);
    }
    FILE *f = fopen(nm, "w");
        if (f == NULL) {
            printf("Error opening file.");
            exit(1);
        }
    printf("Type your file: \n");
    scanf("%s", rbg);
    ;fprintf(f, " %s\n", rbg);
    free(f);
    free(rbg);
    free(nm);
    return 0;
}
