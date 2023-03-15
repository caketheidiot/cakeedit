#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 8192
#define TYPE_MODE "a" // Defines mode to use (used in line 16) 
int main() {
    char *rbg; // Where text contents go
    char *nm; // Filename
    rbg = (char *) malloc(BUF_SIZE);
    nm = (char *) malloc(32);
    puts("Name: ");
    scanf("%s", nm);
    if (strlen(nm) > 32) {
        puts("ERROR: Filename exceeds limit");
	exit(1);
    }
    FILE *f = fopen(nm, TYPE_MODE);
        if (f == NULL) {
            puts("Error opening file.");
            exit(1);
        }
    puts("Type your file: ");
    getchar();    // catching newline character.
    fgets(rbg, 8192, stdin);
    if (strlen(rbg) > 8192) {
        printf("ERROR: File exceeds 8192 char limit \n");
        exit(1);
    }
    fprintf(f, " %s\n", rbg);
    free(nm);
    free(rbg);
    return 0;
}
