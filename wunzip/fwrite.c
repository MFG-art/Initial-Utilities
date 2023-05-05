
	#include<stdio.h>

	/* Our structure */

	int main()
	{
		int counter;
		FILE *ptr_myfile;
		int data = 1;
		character = 'a';

		ptr_myfile=fopen("test.bin","wb");
		if (!ptr_myfile)
		{
			printf("Unable to open file!");
			return 1;
		}
		
		fwrite(&data, sizeof(int), 1, ptr_myfile);
		fwrite(&character, sizeof(char), 1, ptr_myfile);
		
		fclose(ptr_myfile);
		return 0;
	}
