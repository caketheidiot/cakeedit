#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 8192
#define TYPE_MODE "a"  //Defines mode to use (used in line 16)
int write(char *rbg, char *nm) {	                           
	if (strlen(nm) > 32) {                                  
		return 3;
	}
	FILE *f = fopen(nm, "w");
	if (f == NULL) {                      
		 return 2;
	}                                                                                                               
	if (strlen(rbg) > 8192) {                                                                                               
		return 1;
	}
	fprintf(f, " %s\n", rbg);
	free(nm);	
	return 0; 
}
int append(char *rbg, char *nm) {
	 if (strlen(nm) > 32) {
		                 return 3;
				         }
	         FILE *f = fopen(nm, "a");
		         if (f == NULL) {
				                  return 2;
						          }

			         if (strlen(rbg) > 8192) {

					                 return 1;
							         }
				 fprintf(f, " %s\n", rbg);
				 free(nm);
	return 0;

}	
