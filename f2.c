#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 8192
#define TYPE_MODE "a"  //Defines mode to use (used in line 16)
		       int write(char *rbg, char *nm) {
		           
		                           
		                                   if (strlen(nm) > 32) {
		                                           
		                                                   exit(1);
		                                                       }
		                                                           FILE *f = fopen(nm, TYPE_MODE);
		                                                                   if (f == NULL) {
		                                                                               
		                                                                                           exit(1);
		                                                                                                 }
		                                                                                                           
		                                                                                                               
		                                                                                                                   if (strlen(rbg) > 8192) {
		                                                                                                                           
		                                                                                                                                   exit(1);
		                                                                                                                                       }
		                                                                                                                                           fprintf(f, " %s\n", rbg);
		                                                                                                                                               free(nm);
		                                                                                                                                                   
		                                                                                                                                                       return 0;
		                                                                                                                                                       }
		                                                                                                                                                       
