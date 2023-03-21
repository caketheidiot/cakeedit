#include <stdio.h>
#include <string.h>
#include "filewrite.c" 
 
int main() {
    char *rbg; // Where text contents go
    char *nm; // Filename
    rbg = (char *) malloc(4096);
    nm = (char *) malloc(16);
    puts("Filename: ");
    scanf("%s", nm);
    if (strlen(nm) > 32) {
        puts("ERROR: Filename exceeds limit");
	exit(1);
    }
    puts("Type your file: \n");
    getchar();    // catching newline character.
    fgets(rbg, 8192, stdin);
    if (strlen(rbg) > 8192) {
        printf("ERROR: File exceeds 8192 char limit \n");
        exit(1);
    }
    append(rbg, nm);
    free(rbg);
    
    return 0;
}
