// code for wcat

#include <stdio.h>
#include <stdlib.h>   
int main(int argc, char *argv[]){

// read argument for name and open file

// use fopen() and check if the file was found
FILE *fp = fopen(argv[1], "r");
if (fp == NULL) {
    printf("wcat: cannot open file\n");
    exit(1);
}

char str[100];
while (fgets(str, 100 , fp) != NULL){
printf("%s",str);
}

// if the file was found use fgets() to get contents

fclose(fp);
   
return 0;   
}  
