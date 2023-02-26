#import <stdio.h>
#import <stdlib.h>
#import <string.h>
int main() {
    char *str;
    char *nm, c;
    nm = (char *) malloc(12);
    str = (char *) malloc(4096);
    printf("Name: ");
    scanf("%s", nm);
    if (strlen(nm) > 12) {
        printf("ERROR: Filename exceeds 12 char limit");
        exit(1);
    }
    if (strlen(str) > 4096) {
        printf("ERROR: File contents exceeds 4096 char limit");
        exit(1);
    }
    FILE *f = fopen(nm, "w");
        if (f == NULL) {
            printf("Error opening file.");
            exit(1);
        }
    printf("EXISTING CONTENTS: ");
    c = fgetc(f);
    while (c != EOF) {
        c = fgetc(f);
        printf("%c", c);
    }
    printf("Type your file: \n");
    scanf("%s", str);
    printf("\n");
    printf("Saving... \n");
    fprintf(f, " %s\n", str);
    free(f);
    free(str);
    free(nm);
    return 0;
}
