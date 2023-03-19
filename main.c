#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "f2.c" 
 
int main() {
    char *rbg; // Where text contents go
    char *nm; // Filename
    rbg = (char *) malloc(8192);
    nm = (char *) malloc(32);
    puts("Name: ");
    scanf("%s", nm);
    if (strlen(nm) > 32) {
        puts("ERROR: Filename exceeds limit");
	exit(1);
    }
    
        
    puts("Type your file: ");
    getchar();    // catching newline character.
    fgets(rbg, 8192, stdin);
    if (strlen(rbg) > 8192) {
        printf("ERROR: File exceeds 8192 char limit \n");
        exit(1);
    }
    write(rbg, nm);
    free(rbg);
      
    return 0;
}
