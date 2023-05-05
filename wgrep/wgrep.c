// code for wgrep

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){


// first argument is search term
// remaining arguments are files to search



if (argc == 1){
	printf("wgrep: searchterm [file ...]");

	
} else if (argc == 2){
	char str[100];
	fgets(str, 100, stdin);
	char *ptr = strstr(str, argv[1]);
	int inString = 0;
	
	if (ptr != NULL) /* Substring found */
	{
		printf(str);
		inString = 1;
	}
	if (inString == 0){
		printf("The file doesn't contain the searched term'");
	}

} else if (argc > 2){
	for (int i = 2; i < argc; i++){
		FILE *fp = fopen(argv[i], "r");
		if (fp == NULL) {	
	    	printf("wgrep: cannot open file\n");
	    	exit(1);
		}
		char str[100];
		int inString = 0;
		while (fgets(str, 100 , fp) != NULL){

			char *ptr = strstr(str, argv[1]);
			
			
			if (ptr != NULL) /* Substring found */
			{
				printf(str);
				printf("\n");
				inString = 1;
			}
		
			
		}
		if (inString == 0){
			printf("The file doesn't contain the searched term '%s'",argv[1]);
		}	
	
	}


	
	
}
 
return 0;   
}  
