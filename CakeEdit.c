#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 8192
int main(int argc, char *argv[]) {
        if (argc != 3) {
        printf("Usage: ./CakeEdit-* \r\n");
        exit(EXIT_FAILURE);
    }
    
    char rbg[BUF_SIZE];
    char *nm;
    nm = (char *) malloc(32);
                                
    printf("Name: ");
    scanf("%s", nm);
    if (strlen(nm) > 32) {
        printf("ERROR: Filename exceeds 32 char limit \r\n");
        exit(1);
    }
    FILE *f = fopen(nm, "w");
        if (f == NULL) {
            printf("Error opening file.");
            exit(1);
        }
    printf("Type your file: \n");
    getchar();                         // catching newline character.
    fgets(rbg, 8192, stdin);
    
    if (strlen(rbg) > 8192) {
        printf("ERROR: File exceeds 8192 char limit \r\n");
        exit(1);
}
    fprintf(f, " %s\n", rbg);
    free(nm);
    free(f);
    return 0;
}
        

