// testing fread adn fwrite

#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[]){
	int a = 1;

	fwrite(&a, sizeof(int), 1, stdout);

	return 0;
}

