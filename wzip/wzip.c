// code for wzip

#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[]){

if (argc == 1){
	printf("wzip: file1 [file2 ...]");
}
if (argc > 1){
	int i = 1;
	for (i = 1; i < argc; i++){
		FILE *fp = fopen(argv[i], "r");
		if (fp == NULL) {	
	    	printf("wzip: cannot open file\n");
	    	exit(1);
		}
		
		char str[1000];
		fgets(str, 1000 , fp);
		
		int i = 0;
		int counter = 1;

			while (str[i] != '\0'){
				if (str[i] == str[i+1]){
					i++;
					counter++;
				} if (str[i] != str[i+1]){
					fwrite(&counter, sizeof(int), 1 ,stdout);
					fwrite(&str[i],sizeof(char),1,stdout);
					i++;
					counter = 1;
			
				}
			}
		}
	}
		

   
return 0;   
}  
