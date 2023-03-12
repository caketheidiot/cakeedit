
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 8192
#define TYPE_MODE "a"
int main() {
    
    char rbg[BUF_SIZE];
    char *nm;
    
    
    nm = (char *) malloc(32);
        
    printf("Name: ");
    scanf("%s", nm);
    if (strlen(nm) > 32) {
	printf("ERROR: Filename exceeds limit");
    }
    FILE *f = fopen(nm, TYPE_MODE);
        if (f == NULL) {
            printf("Error opening file.");
            exit(1);
        }
    printf("Type your file: \n");
    getchar();                         // catching newline character.
    fgets(rbg, 8192, stdin);
    
    if (strlen(rbg) > 8192) {
        printf("ERROR: File exceeds 8192 char limit \n");
        exit(1);
    }
    fprintf(f, " %s\n", rbg);
    free(nm);
    
     
    return 0;
}
