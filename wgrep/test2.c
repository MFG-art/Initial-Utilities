#include <stdio.h>
int main()
{
	char arr[1];
	char arr2[2];
	fwrite(arr, 1, sizeof(arr), stdout);
	fwrite(arr2, 1, sizeof(arr2), stdout);
		fwrite(arr, 1, sizeof(arr), stdout);
	fwrite(arr2, 1, sizeof(arr2), stdout);
	return 0;
}
