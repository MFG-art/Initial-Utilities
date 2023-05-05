
	#include<stdio.h>



	int main()
	{
		int counter;
		FILE *ptr_myfile;
		int a,b,c = 0;

		ptr_myfile=fopen("out.z","rb");
		if (!ptr_myfile)
		{
			printf("Unable to open file!");
			return 1;
		}

			fread(&a,sizeof(int),1,ptr_myfile);
			fread(&b,sizeof(int),1,ptr_myfile);
			fread(&c,sizeof(int),1,ptr_myfile);
			
			printf("%d %d %d ",a,b,c);
		
		fclose(ptr_myfile);
		return 0;
	}
