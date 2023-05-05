// code for wunzip

#include <stdio.h>
#include <stdlib.h> 



int main(int argc, char *argv[]){
if (argc == 1){
	printf("wunzip: file1 [file2 ...]");
}
if (argc > 1){
	
	
	int i = 1;
	for (i = 1; i < argc; i++){
		FILE *fp = fopen(argv[i], "rb");
		if (fp == NULL) {	
	    	printf("wunzip: cannot open file\n");
	    	exit(1);
		}
		

	
		char c;
		int i;
		
		while(!feof(fp)){
		

		fread(&i, 4,1,fp);
		fread(&c, 1,1,fp);
		
//		printf("integer: %d, character: %c", i,c);
		
		int j = 0;
		for (j  = 0; j < i; j++){
			printf("%c",c);
		}
	}


	}
	}

   
return 0;   
}  
